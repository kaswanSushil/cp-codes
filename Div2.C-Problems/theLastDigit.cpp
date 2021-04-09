#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

li mod = 10;


void solve()
{
	li x,n;
	cin>>x>>n;
	if(x==0)
	{
		cout<<0<<endl;
		return;
	}
	if(n==0)
	{
		cout<<1<<endl;
		return;
	}
	x%=10;
	if(x==0)
	{
		cout<<0<<endl;
		return;
	}
	li res = 1;
	while(n)
	{
		if(n&1)res = (res*x)%10;
		x = (x*x)%10;
		n>>=1;
	}
	cout<< res << endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}

