#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	cin>>n;
	li arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	li ans=-1e18;
	for(int i=1;i<=5;i+=2)
	{
		li curr =1;
		for(int j=n-1;j>=n-i;j--)curr*=arr[j];
		for(int j=0;j<5-i;j++)curr*=arr[j];
		ans = max(ans,curr);
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

