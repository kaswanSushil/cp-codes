#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)


int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1;
		return 0 ;
	}
	if(n<=3)cout<<"NO SOLUTION";
	else if(n==4)
	{
		cout<<"2 4 1 3";
		return 0;
	}
	else
	{
		for(int i=n;i>0;i-=2)cout<<i<<" ";
		for(int i=n-1;i>0;i-=2)cout<<i<<" ";
	}
	
}

