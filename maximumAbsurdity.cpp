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
	for(int i=0;i<n;i++)cin>>arr[i];
	li suffix[n],index[n],prefix[n];
	li curr=0;
	for(int i=0;i<n;i++)
	{
		curr+=arr[i];
		if(i>=k)curr-=arr[i-k];
		prefix[i]=curr;
	}
	curr=arr[n-1];
	suffix[n-1]=curr;
	index[n-1]=n-1;
	for(int i=n-2;i>=0;i--)
	{
		curr+=arr[i];
		if(i+k<n)curr-=arr[i+k];
		suffix[i]=curr;
		index[i]=i;
		if(suffix[i]<suffix[i+1])
		{
			suffix[i]=suffix[i+1];
			index[i]=index[i+1];
		}
	}
	li a=0,b=0,ma=0;
	for(int i=k-1;i<n-k;i++)
	{
		li curr = prefix[i]+suffix[i+1];
		if(curr>ma)
		{
			a = i-k+1
			;
			b = index[i+1];
			ma = curr;
		}
	}
	cout<<a+1<<" "<<b+1;
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

