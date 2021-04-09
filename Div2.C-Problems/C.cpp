#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
int a[100002],b[100002],c[100002];
int main()
{
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		for(int j=1;j<=m;j++)
		{
			int x;
			cin>>x;
			if(x<b[j])c[j]=i;
			b[j]=x;
			if(c[j]<a[i])a[i]=c[j];
		}
	}
	int k;
	cin>>k;
	while(k--)
	{
		int l,r;
		cin>>l>>r;
		if(a[r]<=l)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

