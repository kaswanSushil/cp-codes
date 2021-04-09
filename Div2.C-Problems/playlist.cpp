#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<li, li> pt;

int n,m,i,j,k,l,x;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    cin>>n>>k;
    vector<pt> store(n);
    for(int i=0;i<n;i++)
    {
    	cin>>store[i].second>>store[i].first;
	}
    sort(store.begin(),store.end(),greater<pt>());
    li ans=0,sum=0;
    priority_queue<li,vector<li>,greater<li> > pq;
    for(int i=0;i<n;i++)
    {
    	while(pq.size()>=k)
    	{
    		sum-=pq.top();
    		pq.pop();
		}
		sum+=store[i].second;
		pq.push(store[i].second);
		ans = max(ans,sum*store[i].first);
	}
	cout<<ans;
}

