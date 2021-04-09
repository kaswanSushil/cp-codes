#include <bits/stdc++.h>
using namespace std;
const int sz = 1e6;
long long int fac[sz],mod = 998244353;

long long int power(long long int x,long long int pow)
{
	if(pow==0)return 1;
	if(pow%2==1)return (x*power((x*x)%mod,pow/2))%mod;
	return power((x*x)%mod,pow/2);
}

long long int ncr(int n,int r)
{
	long long int  up = fac[n];
	long long int  dn = (fac[r]*fac[n-r])%mod;
	long long int ways = power(dn,mod-2);
	ways = (ways*up)%mod;
	return ways;
}

void solve()
{

	int n;
	cin>>n;
	int bits[34]={0};
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		for(int k=0;k<30;k++)
		{
			if(j&(1<<k))bits[k]++;
		}	
	}
	
	long dp[n+1]={0};
	fac[0]=1;
	for(int i=1;i<=n;i++)
	{
		fac[i]=(fac[i-1]*i)%mod;
//		cout<<fac[i]<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		long cont = 1;
		dp[i]=dp[i-1];
		for(int k=0;k<30;k++,cont*=2)
		{
			for(int j = 1;j<=bits[k]&&j<=i;j+=2)
			{
				int rem = n - bits[k];
				int need = i-j;
				if(rem<need)continue;
				long ways1 = ncr(bits[k],j),ways2 = ncr(rem,need);
				ways1=(ways1*ways2)%mod;
				ways1=(ways1*cont)%mod; 
				dp[i]= (dp[i]+ways1)%mod;
			}
		}
	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>n;
		cout<<dp[n]<<endl;
	}
}

int main() 
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}

