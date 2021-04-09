#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<li,li> pt;
void solve()
{
	int n;
	cin>>n;
	map<int,int> fr,count;
	vector<pt> store;
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		fr[j]++;
	}
	map<int,int> :: iterator it;
	for(it=fr.begin();it!=fr.end();++it)
	{
		count[it->second]++;
	}
	map<int,int> :: iterator it1;
	for(it1=count.begin();it1!=count.end();++it1)
	{
		store.push_back({it1->first,it1->second});
	}
	li ans = 0,curr=0;
	sort(store.begin(),store.end(),greater<pt>());
	for(int i=0;i<store.size();i++)
	{
		curr+=store[i].second;
		ans = max(ans,curr*store[i].first);
	}
	cout<<n-ans<<endl;
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

