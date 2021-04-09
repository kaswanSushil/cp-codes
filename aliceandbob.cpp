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
	int mi=1e5;
	int arr[10];
	forn(i,9)
	{
		cin>>arr[i+1];
		mi = min(arr[i+1],mi);
	}
	if(mi>n)
	{
		cout<<"-1\n";
		return;
	}
	int cnt = n/mi;
	int rem = n%mi;
	int a=0,b=0;
	for(int i=1;i<10;i++)
	{
		if(arr[i]==mi)a=i;
	}
	while(cnt>0)
	{
		rem += mi;
		int i=9;
		for(;i>a;i--)
		{
			if(rem>=arr[i])break;
		}
		if(i>a)
		{
			cout<<i;
			cnt--;
			rem-=arr[i];
		}
		else break;
	}
	while(cnt>0)
	{
		cout<<a;
		cnt--;
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

