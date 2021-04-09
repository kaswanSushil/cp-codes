#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

void solve()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	int start=1,end = n;
	while(start<=end&&arr[start]==start)start++;
	while(end>start&&arr[end]==end)end--;
	if(start>=end)
	{
		cout<<0<<endl;
		return;
	}
	int ans = 1;
	while(start<=end)
	{
		if(arr[start]==start)
		{
			ans = 2;
			break;
		}
		start++;
	}
	cout<<ans<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
	}
}

