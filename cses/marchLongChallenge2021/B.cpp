#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

void solve()
{
	string s;cin>>s;
	int n = s.size();
	bool f1=false,f2=false;
	int cnt=1;
	int i=n-2;
	while(i>=0)
	{
		if(s[i]==s[i+1])cnt++;
		else cnt=1;
		if(cnt>1)
		{
			if(s[i]=='1'&&f1)
			{
				cout<<"NO\n";
				return;
			}
			else if(s[i]=='0')f1=true;
		}
		i--;
	}
	cout<<"YES\n";
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

