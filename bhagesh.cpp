#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

int combineParts(vector<int> parts)
{
	priority_queue<int,vector<int>,greater<int> > pq;//min heap
	int n = parts.size();
	for(int i=0;i<n;i++)pq.push(parts[i]);
	int ans=0;
	while(pq.size()>1)
	{
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		ans += first + second;
		pq.push(first+second);
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	cout<<combineParts(arr);
}

