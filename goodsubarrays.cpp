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
	map<int,li> fr;
	li ans = 0,curr=0;
	fr[0]=1;
	for(int i=0;i<n;i++)
	{
		curr += (s[i]-'1');
		ans += fr[curr];
		fr[curr]++;
	}
	cout<<ans<<endl;
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

