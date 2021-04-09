#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li a,b,n;
	cin>>a>>b>>n;
	li arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	li d=0;
	for(int i=0;i<n;i++)
	{
		li j;
		cin>>j;
		j = (j+a-1)/a;
		d += j*arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(b - d + arr[i] > 0)
		{
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
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

