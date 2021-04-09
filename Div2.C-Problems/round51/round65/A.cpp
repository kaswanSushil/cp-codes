#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	string s,t;
	cin>>s>>t;
	int a[256]={0},b[256]={0};
	int n = s.size();
	for(int i=0;i<n;i++)a[s[i]]=1;
	n = t.size();
	for(int i=0;i<n;i++)b[t[i]]=1;
	int ans = 0;
	for(int i=0;i<256;i++)ans += a[i]^b[i];
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

