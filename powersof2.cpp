#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


int main()
{
	int n;
	cin>>n;
	map<li,int> store;
	li arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		store[arr[i]]++;
	}
	li ans = 0;
	li powers[31];
	powers[0]=1;
	for(int i=1;i<=30;i++)powers[i]=powers[i-1]*2;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=30;j++)
		{
			li curr = powers[j]-arr[i];
			ans += store[curr];
			if(curr==arr[i])ans--;
		}
	}
	ans/=2;
	cout<<ans;
}

