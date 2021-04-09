#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

void solve()
{
	int n,m;
	cin>>n>>m;
	int dp[n][m];
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		dp[i][0]=s[0]=='*'?1:0;
		for(int j=1;j<m;j++)
		{
			dp[i][j]=dp[i][j-1];
			if(s[j]=='.')dp[i][j]=0;
			else dp[i][j]++;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(dp[i][j])
			{
				int left=j,right=j,row=i;
				while(left>=0&&right<m&&row<n&&dp[row][left]&&dp[row][right])
				{
					int k = dp[row][right] - dp[row][left];
					if(k==(right-left))
					{
						ans++;
						row++;
						left--;
						right++;
					}
					else break;
				}
			}
		}
	}
	cout<<ans<<endl;
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

