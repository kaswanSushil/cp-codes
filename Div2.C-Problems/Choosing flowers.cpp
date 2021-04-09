#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<li, li> pt;
void solve()
{
	li n,m;
	cin>>n>>m;
	vector<pt> arr(m);
	for(int i=0;i<m;i++)
	{
		cin>>arr[i].second>>arr[i].first;
	}
	sort(arr.begin(),arr.end());
	li ans = 0;
	priority_queue <li, vector<li>, greater<li> > pq;
	li sum=0;
	for(int i=0;i<m;i++)
	{
//		cout<<arr[i].second<<" "<<arr[i].first<<endl;
		while(!pq.empty()&&(pq.top()<=arr[i].first||pq.size()>=n))
		{
			sum -= pq.top();
			pq.pop();
		}
		sum+=arr[i].second;
		pq.push(arr[i].second);
		int k = pq.size();
		ans = max(ans,sum + arr[i].first*(n-k));
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

