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
	map<int,int> fr;
	f(i,n)
	{
		int j;
		cin>>j;
		fr[j]++;
	}
	vector<int> store;
	map<int,int> :: iterator it;
	for(it=fr.begin();it!=fr.end();++it)store.push_back(it->second);
	sort(store.begin(),store.end(),greater<int>());
	int ans=0,left=1,right=n;
	while(left<=right)
	{
		int arr[n];
		memset(arr,0,sizeof(arr));
		int mid = (left+right)/2;
		bool flag = true;
		f(i,store.size())
		{
			int k = store[i];
			int s = i;
			while(arr[s])s++;
			for(int j = s;j<n&&k>0;j+=(mid+1),k--)
			{
				arr[j]=1;
			}
		}
		f(i,n)
		{
			if(!arr[i])
			{
				flag = false;
				break;
			}
		}
		if(flag)
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

