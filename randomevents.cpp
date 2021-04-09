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
	int n,m;
	cin>>n>>m;
	int r=0;
	float ans =1.0;
	for(int i=1;i<=n;i++)
	{
		int j;
		cin>>j;
		if(j!=i)r=i;
	}
	while(m--)
	{
		int ind;
		float f;
		cin>>ind>>f;
		if(ind<r)continue;
		ans *=(1.0-f);
	}
	if(r==0)
	{
		ans=0;
	}
	cout<<fixed<<setprecision(6)<<(1.0-ans)<<endl;
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

