#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n,m;
    cin>>n>>m;
    vector<pt> arr(n);
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i].first>>arr[i].second;
	}
	int ans=-1;
	bool visit[n];
//	cout<<ans<<endl;
	memset(visit,true,sizeof(visit));
	for(int i=0;i<n;i++)
	{
		if(visit[i])
		{
			visit[i]=false;
			ans++;
			queue<int> q;
			q.push(i);
			while(!q.empty())
			{
				int ind = q.front();
				q.pop();
				for(int j=0;j<n;j++)
				{
					if(visit[j]&&(arr[ind].first==arr[j].first||arr[j].second==arr[ind].second))
					{
						visit[j]=false;
						q.push(j);
					}
				}
			}
		}
	}
	cout<<ans;
}

