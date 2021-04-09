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
	vector<vector<int> > dp(n,vector<int>(m+1,0));
	int ans=0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		for(int j=1;j<=m;j++)
		{
			if(s[j-1]=='.')continue;
			dp[i][j]=dp[i][j-1]+1;
		}
//		for(int j=0;j<=m;j++)cout<<dp[i][j]<<" ";
//		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(dp[i][j]-dp[i][j-1]==1)
			{
				ans++;
				int left=j-1,right=j+1,need=3,row=i+1;
				while(left>0&&right<=m&&row<n)
				{
					int nn = dp[row][right]-dp[row][left-1];
					if(nn==need)
					{
						ans++;
						row++;
						left--;
						right++;
						need+=2;
					}
					else break;
				}
			}
		}
	}
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

