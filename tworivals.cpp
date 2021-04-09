#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int left = 2,right=n,ans=-1;
	while(left<=right)
	{
		int mid = (left+right)/2;
		int ma=0,pos=0;
		int fr[n+1];
		memset(fr,0,sizeof(fr));
		bool flag = false;
		for(int i=0;i<mid;i++)
		{
			fr[arr[i]]++;
			if(fr[arr[i]]>ma&&fr[arr[i]]>1)
			{
				flag = true;
			}
			else if(fr[arr[i]]==ma)flag = false;
		}
		
		for(int i=mid;i<n&&!flag;i++)
		{
			fr[arr[i-mid]]--;
			fr[arr[i]]++;
			if(fr[arr[i]]>ma&&fr[arr[i]]>1)
			{
				flag = true;
			}
			else if(fr[arr[i]]==ma)flag = false;
		}
		if(flag)
		{
			ans = mid;
			right = mid-1;
		}
		else left = mid+1;
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

