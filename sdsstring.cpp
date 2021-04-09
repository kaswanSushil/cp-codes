#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
int n,m,x,k,y;
int arr[n];

li destroy(int start,int end,int l,int r)
{
	int len = end - start + 1;
	if(len<=0)return 0;
	int ma = 0;
	for(int i=start;i<=end;i++)ma = max(ma,arr[i]);
	if(ma>l&&ma>r&&len<)
}

void solve()
{
	cin>>n>>m>>x>>k>>y;
	map<int,int> store;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		store[arr[i]]=i;
	}
	vector<int> seq;
	for(int i=0,j;i<m;i++)
	{
		cin>>j;
		seq.push_back(store[j]);
	}
	for(int i=1;i<seq.size();i++)
	{
		if(seq[i-1]>seq[i])
		{
			cout<<"-1\n";
			return;
		}
	}
	li ans = 0,ret;
	if(seq.size()==1)
	{
		ret = destroy(0,seq[0]-1,arr[seq[0]],arr[seq[0]]);
		if(ret==-1)
		{
			cout<<"-1\n";
			return;
		}
		ans = ret;
		
		ret = destroy(seq[0]+1,n-1,arr[seq[0]],arr[seq[0]]);
		if(ret==-1)
		{
			cout<<"-1\n";
			return;
		}
		ans += ret;
	}
	else
	{
		ret = destroy(0,seq[0]-1,arr[seq[0]],arr[seq[0]]);
		if(ret==-1)
		{
			cout<<"-1\n";
			return;
		}
		ans += ret;
		for(int i=1;i<seq.size();i++)
		{
			ret = destroy(seq[i-1]+1,seq[i]-1,arr[seq[i-1]],arr[seq[i]]);
			if(ret==-1)
			{
			cout<<"-1\n";
			return;
			}
			ans += ret;
		}
		ret =destroy(seq[seq.size()-1]+1,n-1,arr[seq[seq.size()-1]],arr[seq[seq.size()-1]]);
		if(ret==-1)
		{
			cout<<"-1\n";
			return;
		}
		ans += ret;
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

