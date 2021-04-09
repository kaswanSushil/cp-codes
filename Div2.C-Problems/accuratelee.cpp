#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	string s;
	cin>>n>>s;
	int cnt = count(s.begin(),s.end(),'0');
	if(cnt==0||cnt==n)
	{
		cout<<s<<endl;
		return;
	}
	int i=0;
	while(i<n&&s[i]=='0')
	{
		cout<<0;
		i++;
	}
	cnt=0;
	n--;
	while(i<=n&&s[n]=='1')
	{
//		cout<<s[n];
		cnt++;
		n--;
	}
	if(i<n)cout<<0;
	while(cnt--)cout<<1;
	cout<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

