#include<bits/stdc++.h>
using namespace std;

bool valid(string s)
{
	int n = s.length();
	for(int i=0;i<n;i++)
	{
		if(isalpha(s[i])||s[i]==','||s[i]=='.'||s[i]=='?'||s[i]=='!'||s[i]=='-')continue;
		return false;
	}
	return true;
}


int howmany(string s)
{
	stringstream ss(s);
	int ans=0;
	while(ss>>s)
	{
		if(valid(s))ans++;
	}
	return ans;
}


int main()
{
	
}
