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
	li n,k,mod=1e9+7;
	cin>>n>>k;
	if(k==1)
	{
		cout<<"1\n";
		return;
	}
	li dp[n][k];
	for(int i=0;i<k;i++)dp[0][i]=1;
	for(int i=1;i<n;i++)
	{
		if(i%2!=0)
		{
			dp[i][k-1]=0;
			for(int j=k-2;j>=0;j--)
			{
				dp[i][j]=(dp[i][j+1]+dp[i-1][j+1])%mod;
			}
		}
		else
		{
			dp[i][0]=0;
			for(int j=1;j<k;j++)
			{
				dp[i][j]=(dp[i][j-1]+dp[i-1][j-1])%mod;
			}
		}
	}
	li sum=1;
	f(i,n)
	{
		if(i&1)
		{
			sum=(sum+dp[i][0])%mod;
		}
		else
		{
			sum=(sum+dp[i][k-1])%mod;
		}
	}
	cout<<sum<<"\n";
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

