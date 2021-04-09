#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	
	int n;
	string s;
	cin>>n>>s;
	string ans(n,'0');
	int a = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==')')a--;
		ans[i]=char('0'+(a&1));
		if(s[i]=='(')a++;
	}
	cout<<ans;
}

