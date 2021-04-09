#include <bits/stdc++.h>
using namespace std;
const int sz = 1e6;
long long int  fac[sz],mod = 998244353;

long power(long long int x,long pow)
{
	if(pow==0)return 1;
	cout<<x<<endl;
	if(pow%2==1)return (x*power((x*x)%mod,pow/2))%mod;
	return power((x*x)%mod,pow/2);
}

long long int ncr(int n,int r)
{
	long long int  up = fac[n];
	long long int  dn = (fac[r]*fac[n-r])%mod;
	cout<<dn<<endl;
	long long int ways = power(dn,mod-2);
	cout<<ways<<endl;
	ways = (ways*up)%mod;
	return ways;
}

int main()
{
	int n,r;
	cin>>n>>r;
	fac[0]=1;
	for(int i=1;i<=n;i++)
	{
		fac[i]=(fac[i-1]*i)%mod;
	}
	cout<<ncr(n,r);
}
