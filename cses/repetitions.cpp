#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
//typedef int sz(s) s.size()
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

void solve()
{
	string s;
	cin>>s;
	int n = s.size(),ans=0,curr=0;
	char ch='.';
	f(i,n)
	{
		if(ch!=s[i])
		{
			ch = s[i];
			ans = max(ans,curr);
			curr=0;
		}
		curr++;
	}
	ans = max(ans,curr);
	cout<<ans;
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1;
//	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

