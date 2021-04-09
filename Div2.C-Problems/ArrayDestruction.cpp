#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
int arr[2001];
map<int,int> store;
bool flag;

void fun(int ind,int x,vector<pt> &ans,map<int,int> &fr)
{
	while(ind>=0)
	{
		if(fr[arr[ind]]>0)
		{
			fr[arr[ind]]--;
			if(fr[x-arr[ind]]==0)
			{
				flag = false;
				return;
			}
			ans.push_back({arr[ind],x-arr[ind]});
			fr[x-arr[ind]]--;
			x = arr[ind];
			
		}
		ind--;
	}
}

void solve()
{
	int n;
	cin>>n;
	store.clear();	
	flag = true;
	n*=2;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		store[arr[i]]++;
	}
	sort(arr,arr+n);
	for(int i=n-2;i>=0;i--)
	{
		vector<pt> ans;
		ans.push_back({arr[n-1],arr[i]});
		map<int,int> temp;
		temp = store;
		temp[arr[i]]--;
		temp[arr[n-1]]--;
		flag = true;
		fun(n-2,arr[n-1],ans,temp);
		if(flag)
		{
			cout<<"YES\n";
			cout<<arr[n-1]+arr[i]<<endl;
			
			for(int i=0;i<ans.size();i++)
			{
				cout<<ans[i].first<<" "<<ans[i].second<<endl;
			}
			return;
		}
	}
	cout<<"No"<<endl;
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

