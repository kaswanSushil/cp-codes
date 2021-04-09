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
	li sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i%2==0)
		sum+=arr[i];
	}
	if(n&1)
	{
		if(arr[0]>arr[n-1])swap(arr[0],arr[n-1]);
	}
	cout<<sum<<endl;
	li curr = 0,ma=0;
	for(int i=1;i<n;i+=2)
	{
		cout<<arr[i]<<" "<<arr[i-1]<<endl;
		curr = curr + arr[i]-arr[i-1];
		if(curr<0)curr=0;
		ma = max(ma,curr);
	}
	cout<<ma<<endl;
	cout<<sum+ma<<endl;
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

