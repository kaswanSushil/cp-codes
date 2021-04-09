#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

map<int,vector<int> > graph,groups;

const int sz = 1e6;
int ans[sz];
bool A[sz],B[sz];


void dfs(int node,queue<int> &q)
{
	for(int i=0;i<graph[node].size();i++)
	{
		if(!B[graph[node][i]])
		{
			int gr = graph[node][i];
			B[gr]=true;
			for(int j=0;j<groups[gr].size();j++)
			{
				if(A[groups[gr][j]])continue;
				q.push(groups[gr][j]);
				A[groups[gr][j]]=true;
				dfs(groups[gr][j],q);
			}
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int k;
		cin>>k;
		for(int j=0;j<k;j++)
		{
			int x;
			cin>>x;
			graph[x].push_back(i);
			groups[i].push_back(x);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!A[i])
		{
			queue<int> q;
			q.push(i);
			A[i]=true;
			dfs(i,q);
			int k = q.size();
			while(!q.empty())
			{
				ans[q.front()]=k;
				q.pop();
			}
		}
		cout<<ans[i]<<" ";
	}
}

