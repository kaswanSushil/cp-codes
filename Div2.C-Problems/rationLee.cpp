#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n,k;
	cin>>n>>k;
	li arr[n];
	li ans=0;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n,greater<li>());
	int w[k];
	for(int i=0;i<k;i++)cin>>w[i],ans+=arr[i];
	sort(w,w+k);
	int ind=k;
	int s=0;
	for(int i=0;i<k;i++)
	{
		ind+=w[i]-1;
		if(w[i]==1)ans+=arr[s++];
		else
		ans+=arr[ind-1];
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

