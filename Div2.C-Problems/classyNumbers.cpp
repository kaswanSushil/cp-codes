#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<li, li> pt;
vector<li> store;
map<pt,li> fr;
void solve()
{
	li l,r;
	cin>>l>>r;
	if(fr.find({l,r})==fr.end())fr[{l,r}]=upper_bound(store.begin(),store.end(),r) - lower_bound(store.begin(),store.end(),l);
	cout<<fr[{l,r}]<<endl;
}
bool isClassy(li n)
{
	int cnt = 0;
	while(n)
	{
		if(n%10)cnt++;
		n/=10;
	}
	return cnt<4;
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

	queue<li> q;
	for(li i=1;i<10;i++)q.push(i);
	while(!q.empty())
	{
		li curr = q.front();
//		cout<<curr<<endl;
		q.pop();
		if(isClassy(curr)&&curr<=1e18)
		{
			store.push_back(curr);
			curr*=10;
			for(int i=0;i<10;i++)
			{
				q.push(curr+i);
			}
		}
	}
	sort(store.begin(),store.end());
    int t;
    cin>>t;
//    cout<<t;
	for(int i=0;i<t;i++)solve();
}

