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
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b&&a>=c)
	{
		if(b<=c)
		{
			for(int i=0;i<=c;i++)
			{
				int ac = i;
				int bc = c-i;
				int ab = a-i;
				if(bc+ab==b)
				{
					cout<<ab<<" "<<bc<<" "<<ac;
					return ;
				}
			}
		}
		else
		{
			for(int i=0;i<=b;i++)
			{
				int ab = i;
				int bc = b-i;
				int ac = a-i;
				if(ac+bc==c)
				{
					cout<<ab<<" "<<bc<<" "<<ac;
					return;
				}
			}
		}
	}
	else if(b>=c)
	{
		if(a<=c)
		{
			for(int i=0;i<=a;i++)
			{
				int ab = i;
				int ac = a-i;
				int bc = b-i;
				if(ac+bc==c)
				{
					cout<<ab<<" "<<bc<<" "<<ac;
					return;
				}
			}
		}
		else
		{
			for(int i=0;i<=c;i++)
			{
				int bc = i;
				int ab = b-i;
				int ac = c-i;
				if(ab+ac==a)
				{
					cout<<ab<<" "<<bc<<" "<<ac;
					return;
				}
			}
		}
	}
	else
	{
		if(a<=b)
		{
			for(int i=0;i<=a;i++)
			{
				int ac = i;
				int bc = c-i;
				int ab = a-i;
				if(ab+bc==b)
				{
					cout<<ab<<" "<<bc<<" "<<ac;
					return;
				}
			}
		}
		else
		{
			for(int i=0;i<=b;i++)
			{
				int bc = i;
				int ab = b-i;
				int ac = c-i;
				if(ac+ab==a)
				{
					cout<<ab<<" "<<bc<<" "<<ac;
					return;
				}
			}
		}
	}
	cout<<"Impossible";
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

