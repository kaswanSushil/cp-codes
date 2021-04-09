#include <bits/stdc++.h>

using namespace std;

#define MULTITEST

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define endl "\n"
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = int(1e9) + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);


void solve()
{
	int n;
	cin>>n;
	li arr[n+1];
	arr[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	multiset<int> sums;
	sums.insert(0);
	sums.insert(arr[n]);
	set<pair<int,int> > segments;
	segments.insert({1,n});
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		set<pair<int,int> > :: iterator it = lower_bound(segments.begin(),segments.end(),make_pair(j+1,j));
		--it;
		int start = (*it).first,end = (*it).second;
		int curr = arr[end]-arr[start-1];
		sums.erase(curr);
		if(start<j)
		{
			sums.insert(arr[j-1]-arr[start-1]);
			segments.insert({start,j-1});
		}
		if(j<end)
		{
			sums.insert(arr[end]-arr[j]);
			segments.insert({j+1,end});
		}
		cout<<*sums.rbegin()<<" ";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1;
//	 cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

