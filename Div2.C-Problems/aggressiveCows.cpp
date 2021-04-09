#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li n,c;
	cin>>n>>c;
	li arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	li left = 1,right = arr[n-1],ans = 0;
	while(left<=right)
	{
		li mid = (left+right)/2;
		li last = arr[0],cnt=1;
		for(int j=1;j<n&&cnt<c;j++)	
		{
			if(arr[j]>=last+mid)
			{
				cnt++;
				last = arr[j];
			}
		}
		if(cnt==c)
		{
			ans = mid;
			left = mid+1;
		}
		else right = mid-1;
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

