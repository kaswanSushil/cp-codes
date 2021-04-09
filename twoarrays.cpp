#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
li mod = 1e9+7;
li n,m;
li dp[15][1005][1005];
li fun(int ind,int a,int b)
{
	if(ind==m)return 1;
	li &res = dp[ind][a][b];
	if(res)return res;
	for(int i = a+1;i<b;i++)
	{
		for(int j=b-1;j>=i;j--)
		res = (res + fun(ind+1,i-1,j+1))%mod;
	}
	return res;
}
int main()
{
	cin>>n>>m;
	memset(dp,0,sizeof(dp));
	cout<<fun(0,0,n+1);
}

