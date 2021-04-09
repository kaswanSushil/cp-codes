#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
map<int,vector<int> > graph;
map<pair<int,int>,int> store;
int solve(int node,int w)
{
	if(store.find({node,w})!=store.end())return store[{node,w}];
	int sz = graph[node].size();
	int k = w;
	if(sz==0)return 0;
	if(w%sz!=0)return w;
	w/=sz;
	int ans=0;
	for(int i=0;i<sz;i++)
	{
		ans += solve(graph[node][i],w);
	}
//	cout<<ans<<endl;
	return store[{node,k}]=ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for(int i=2,j;i<=n;i++)
    {
    	cin>>j;
    	graph[j].push_back(i);
	}
	int q;
	cin>>q;
	while(q--)
	{
		int n,w;
		cin>>n>>w;
		cout<<solve(n,w)<<endl;
	}
}

