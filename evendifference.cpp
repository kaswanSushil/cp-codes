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
	map<int,int> store;
	int j;
	while(n--)
	{
		cin>>j;
		for(int i=2;i<=sqrt(j);i++)
		{
			while(j%i==0)
			{
				store[i]++;
				j/=i;
			}
		}
		if(j>1)store[j]++;
	}
	li ans=1;
	map<int,int> :: iterator it;
	for(it=store.begin();it!=store.end();++it)ans*=(it->second+1);
	cout<<ans<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
