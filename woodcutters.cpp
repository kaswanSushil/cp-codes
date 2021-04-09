#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	cin>>n;
	if(n<=2)
	{
		cout<<n;
		return;
	}
	li arr[n],brr[n];
	for(int i=0;i<n;i++)cin>>arr[i]>>brr[i];
	li ans = 2,last = -1e10;
	last = arr[0];
	for(int i=1;i<n-1;i++)
	{
		if(last+brr[i]<arr[i])
		{
			last = arr[i];
			ans ++;
		}
		else if(arr[i]+brr[i]<arr[i+1])
		{
			ans ++;
			last = arr[i]+brr[i];
		}
		else last = arr[i];
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

