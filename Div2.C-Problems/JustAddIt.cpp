#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
li mod = 10000007;

li binpow(li a,li b)
{
	li res = 1;
	while(b)
	{
		if(b&1)res = (res*a)%mod;
		a = (a*a)%mod;
		b/=2;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    li n,k;
    cin>>n>>k;
    while(n!=0)
    {
    	li ans = 0;
    	ans = (ans + 2*binpow(n-1,k))%mod;
    	ans = (ans + 2*binpow(n-1,n-1))%mod;
    	ans = (ans + binpow(n,k))%mod;
    	ans = (ans + binpow(n,n))%mod;
    	cout<<ans<<endl;
    	cin>>n>>k;
	}
}

