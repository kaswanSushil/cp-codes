#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string x,y;
    cin>>x>>y;
    int n,m;
    n = x.size(), m = y.size();
    if(n!=m)
    {
    	cout<<"NO";
    	return 0;
	}
	if(n==1)
	{
		if(x==y)cout<<"YES";
		else cout<<"NO";
		return 0;
	}
	if(x==y)
	{
		cout<<"YES";
		return 0;
	}
	int cnt = count(x.begin(),x.end(),'0');
	int cnt1 = count(y.begin(),y.end(),'0');
	if(cnt==n||cnt1==n)cout<<"NO";
	else cout<<"YES";
}

