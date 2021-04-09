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
	
	int n,m;
	cin>>n>>m;
	string ans = "NO";
	while(m--)
	{
		bool flag = true;
		set<int>fr;
		int k;
		cin>>k;
		for(int i=0;i<k;i++)
		{
			int x;
			cin>>x;
			if(fr.find(-x)!=fr.end())
			{
				flag = false;
			}
			fr.insert(x);
		}
		if(flag)ans="YES";
	}
	cout<<ans;
	
}

