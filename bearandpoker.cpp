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


int fun2(int j)
{
	while(j%2==0)j/=2;
	return j;
}
int fun3(int j)
{
	while(j%3==0)j/=3;
	return j;
}

void solve()
{
	int n;
	cin>>n;
	int j;
	cin>>j;
	j=fun2(j);
	j=fun3(j);
	int fix = j;
	for(int i=1;i<n;i++)
	{
		cin>>j;
		if(j%fix)
		{
			cout<<"No";
			return;
		}
		j/=fix;
		j=fun2(j);
		j=fun3(j);
		if(j>1)
		{
			cout<<"No";
			return;
		}
	}
	cout<<"Yes";
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
