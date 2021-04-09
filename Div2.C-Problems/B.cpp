#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
string x,y;
int n,m;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	cin>>n>>x>>y;
	
	sort(y.begin(),y.end());
	int ans=0;
	multiset<int> store,s1;
	for(int i=0;i<n;i++)
	{
		store.insert(y[i]-'0');
		s1.insert(y[i]-'0');
	}
	for(int i=0;i<n;i++)
	{
		
		multiset<int> :: iterator it;
		it = lower_bound(s1.begin(),s1.end(),x[i]-'0');
		if(it!=s1.end())
		s1.erase(it);
	}
	cout<<s1.size()<<endl;
	ans=0;
	for(int i=0;i<n;i++)
	{
		multiset<int> :: iterator it;
		it = lower_bound(store.begin(),store.end(),x[i]+1-'0');
		if(it!=store.end())
		{
			ans++;
			store.erase(it);
		}
	}
	cout<<ans;
}

