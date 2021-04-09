#include <bits/stdc++.h>
using namespace std;

typedef long long int  li;
typedef long double ld;
typedef pair<li, li> pt;
void solve()
{
	int n;
	cin>>n;
	int ans=0,a=0,b=0;
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		if(a!=j)
		{
			ans++;
			a=j;
		}
		else if(b!=j)
		{
			ans++;
			b=j;
		}
	}
	cout<<ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1;
//	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

