#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
const int sz = 1e6+1;
int dp[sz];

int dfs(li n)
{
	if(n==0)return 1;
	if(n<2020)return 0;
	if(dp[n]!=-1)return dp[n];
	dp[n]=0;
	if(dfs(n-2020)||dfs(n-2021))
	{
		dp[n]=1;
	}
	return dp[n];
}

void solve()
{
	li n;
	cin>>n;
	if(dfs(n)==1)
	{
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	memset(dp,-1,sizeof(dp));
    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

