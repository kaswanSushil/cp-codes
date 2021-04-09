#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

map<int,vector<int> > graph;

vector<int> nodes;
int n;

int postorder(int node,int par)
{
	int cnt=1;
	for(int i=0;i<graph[node].size();i++)
	{
		int nxt = graph[node][i];
		if(nxt!=par)
		{
			cnt += postorder(nxt,node);
		}
	}
	if(cnt*2==n)
	{
		nodes.push_back(node);
		nodes.push_back(par);
	}
	return cnt;
}


void solve()
{
	graph.clear();
	
	nodes.clear();
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	if(n&1)
	{
		cout<<graph[1][0]<<" "<<1<<endl;
		cout<<graph[1][0]<<" "<<1<<endl;
		return;
	}
	if(n==2)
	{
		cout<<1<<" "<<2<<endl;
		cout<<1<<" "<<2<<endl;
		return;
	}
	postorder(1,-1);
	if(nodes.size()==2)
	{
		int p=-1,node=0;
		for(int i=0;i<graph[nodes[0]].size();i++)
		{
			if(graph[nodes[0]][i]!=nodes[1])
			{
				cout<<nodes[0]<<" "<<graph[nodes[0]][i]<<endl;
				cout<<nodes[1]<<" "<<graph[nodes[0]][i]<<endl;
				return;
			}
		}
	}
	cout<<1<<" "<<graph[1][0]<<endl;
	cout<<1<<" "<<graph[1][0]<<endl;
	
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

