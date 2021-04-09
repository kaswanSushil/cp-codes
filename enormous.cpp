#include <bits/stdc++.h>
using namespace std;
int n;
string s;
long fun(int ind,vector<long> &dp)
{
	if(ind==n)return 1;
	long &res = dp[ind];
	if(res!=-1)return res;
	if(s[ind]=='0')return res=0;
	if(s[ind]>'2')return res = fun(ind+1,dp);
	if(ind+1<n&&s[ind+1]=='0') return res = fun(ind+2,dp);
	res = fun(ind+1,dp);
	if(s[ind]=='1'&&ind+1<n)res+= fun(ind+2,dp);
	if(s[ind]=='2'&&ind+1<n&&s[ind+1]!='0'&&s[ind+1]<='6')res += fun(ind+2,dp);
	return res;
}
int main()
{
	cin>>s;
	while(s!="0")
	{
		n = s.size();
		vector<long> dp(n,-1);
		cout<<fun(0,dp)<<endl;
		cin>>s;
	}
}
