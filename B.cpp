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
	li n,ma=0;
	cin>>n;
	li arr[n];
	f(i,n)
	{
		cin>>arr[i];
		ma = max(ma,arr[i]);
	}
	li ans=0;
	f(i,n)ans=max(ans,arr[i]^ma);
	ans = min(ans,ma);
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

