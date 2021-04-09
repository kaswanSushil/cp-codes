#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
int ans;
map<int,vector<int> > graph;
int n;

int postorder(int node,int par)
{
	int curr = 0;
	for(int i=0;i<graph[node].size();i++)
	{
		int x = graph[node][i];
		if(x!=par)
		{
			curr += postorder(x,node);
		}
	}
//	cout<<node<<" "<<curr<<"\n";
	if(curr%2==1)ans++;
	return curr+1;
}
 
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    if(n&1)
    {
    	cout<<-1;
    	return 0;
	}
	int s = n+1;
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
		s = min(s,min(u,v));
	}
	postorder(s,-1);
	cout<<ans-1;
}

