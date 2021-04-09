#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n,ans=0;
	cin>>n;
	int arr[3]={0};
	for(int i=0,j;i<n;i++)
	{
		cin>>j;
		j%=3;
		arr[j]++;
	}
	n/=3;
	if(arr[0]<n)
	{
		int need = n-arr[0];
		if(arr[1]>n)
		{
			int k = min(arr[1]-n,need);
			ans += k*2;
			need-=k;
			arr[1]-=k;
		}
		if(arr[2]>n&&need)
		{
			int k = min(need,arr[2]);
			ans += k;
			need-=k;
			arr[2]-=k;
		}
	}
	if(arr[1]<n)
	{
		int need = n-arr[1];
		if(arr[0]>n)
		{
			int k = min(arr[0]-n,need);
			ans += k;
			need-=k;
			arr[0]-=k;
		}
		if(arr[2]>n&&need)
		{
			int k = min(need,arr[2]);
			ans += k*2;
			need-=k;
			arr[2]-=k;
		}
	}
	if(arr[2]<n)
	{
		int need = n-arr[2];
		if(arr[0]>n)
		{
			int k = min(arr[0]-n,need);
			ans += k*2;
			need-=k;
			arr[0]-=k;
		}
		if(arr[1]>n&&need)
		{
			int k = min(need,arr[1]);
			ans += k;
			need-=k;
			arr[2]-=k;
		}
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

