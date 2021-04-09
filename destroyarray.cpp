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
	li ma = 0;
	li arr[n+1];
	arr[0]=0;
	int left[n+1],right[n+2];
	left[0]=INT_MAX;
	right[0]=-1;
	right[n+1]=-1;
	forn(i,n)
	{
		left[i+1]=INT_MAX;
		right[i+1]=-1;
		cin>>arr[i+1];
		arr[i+1]+=arr[i];
	}
	
	int remove[n];
	for(int i=0;i<n;i++)cin>>remove[i];
	for(int i=n-1;i>=0;i--)
	{
		cout<<ma;
		int l = min(remove[i],left[remove[i]-1]);
		int r = max(remove[i],right[remove[i]+1]);
		li curr = arr[r]-arr[l-1];
		ma = max(ma,curr);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1; 
//	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

