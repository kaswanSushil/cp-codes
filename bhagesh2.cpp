#include <bits/stdc++.h>
using namespace std;

int distanceTraversed(vector<vector<int> > lot)
{
	int n = lot.size();
	int m = lot[0].size();
	int row[4]={1,-1,0,0},col[4]={0,0,1,-1};
	queue<int> q;
	q.push(0);
	q.push(0);
	lot[0][0]=-1;
	int ans=0;
	while(!q.empty())
	{
		int sz = q.size()/2;
		ans++;
		while(sz--)
		{
			int a = q.front();
			q.pop();
			int b = q.front();
			q.pop();
			for(int i=0;i<4;i++)
			{
				int aa = a + row[i];
				int bb = b + col[i];
				if(aa<0||bb<0||aa>=n||bb>=m||lot[aa][bb]==0)continue;
				if(lot[aa][bb]==9)return ans;
				lot[aa][bb]=0;
				q.push(aa);
				q.push(bb);
			}
		}
	}
	return -1;
}


int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int> > arr(n,vector<int>(m));
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
	cout<<distanceTraversed(arr);
}

