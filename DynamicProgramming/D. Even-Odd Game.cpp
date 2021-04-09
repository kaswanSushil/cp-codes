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
	cin>>n;
	int arr[n];
	f(i,n)cin>>arr[i];
	sort(arr,arr+n,greater<int>());
	li sum=0;
	f(i,n)
	{
		if(i%2==0&&arr[i]%2==0)sum+=arr[i];
		else if(i%2==1&&arr[i]%2==1)sum-=arr[i];
	}
	if(sum==0)cout<<"Tie\n";
	else if(sum<0)cout<<"Bob\n";
	else cout<<"Alice\n";
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

