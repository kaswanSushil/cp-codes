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
	int cnt[2]={0};
	f(i,n)
	{
		arr[i]=-1;
		int j;
		cin>>j;
		if(j)
		{
			arr[i]=j%2;
			cnt[j%2]++;
		}
	}
	if(n==1)
	{
		cout<<"0\n";
		return;
	}
	int a = (n+1)/2-cnt[1],b = n/2 - cnt[0];
	int start=0;
	while(start<n&&arr[start]==-1)start++;
	if(start==n)
	{
		cout<<"1\n";
		return;
	}
	int end = n-1;
	while(end>start&&arr[end]==-1)end--;
	vector<int> store;
	for(int i=start;i<=end;i++)
	{
		if(arr[i]!=-1)store.push_back(i);
	}
	vector<int> odd,even;
	int ans=0;
	for(int i=1;i<store.size();i++)
	{
		int d = store[i]-store[i-1]-1;
		if(d)
		{
			if(arr[store[i]]==arr[store[i-1]])
			{
				if(arr[store[i]]==0)
				{
					even.push_back(d);	
				}	
				else
				{
					odd.push_back(d);
				}
			}
			else ans++;	
		}
		else
		{
			ans += int(arr[store[i]]!=arr[store[i-1]]);
		}
	}
	sort(odd.begin(),odd.end());
	sort(even.begin(),even.end());
	for(int i=0;i<even.size();++i)
	{
//		cout<<even[i]<<" ";
		if(even[i]>b)ans+=2;
		else b -= even[i];
	}
//	cout<<ans<<" "<<b<<endl;
	for(int i=0;i<odd.size();++i)
	{
		if(odd[i]>a)ans+=2;
		else a -= odd[i];
	}
//	cout<<b<<" ";
	if(arr[start]==arr[end])
	{
		int m = n-1-end;
		n = start;
		int nn = min(n,m);
//		cout<<n<<" "<<m<<endl;
		m = max(n,m);
		n=nn;
		if(arr[start])b=a;
				if(b<n)
				{
					ans+=2;
				}
				else 
				{
					b-=n;
					if(b<m)ans++;
				}
		cout<<ans;
		return;	
	}
	
	if(start>0)
	{
		if(arr[start]==0)
		{
			if(b<start)ans++;
		}
		else
		{
			if(a<start)ans++;
		}
	}
	if(end<n-1)
	{
		start = n - 1 - end;
		if(arr[end]==0)
		{
			if(b<start)ans++;
		}
		else
		{
			if(a<start)ans++;
		}
	}
	cout<<ans;
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1;
//	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

