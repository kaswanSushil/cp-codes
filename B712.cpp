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
	int n;
	string s,t;
	cin>>n>>s>>t;
	int sum[n];
	memset(sum,0,sizeof(sum));
	for(int i=0;i<n;i++)
	{
		if(i>0)sum[i]=sum[i-1];
		if(s[i]=='0')sum[i]--;
		else sum[i]++;
	}
	int turns=0;
	for(int i=n-1;i>=0;i--)
	{
		int k = (turns+s[i])%2;
		int l = t[i]%2;
		if(k==l)continue;
		else if(sum[i]!=0)
		{
//			cout<<i;
			cout<<"NO\n";
			return;
		}
		else turns++;
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

