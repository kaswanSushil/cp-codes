#include <bits/stdc++.h>

using namespace std;


void solve()
{
	int n,k,q;
	cin>>n>>k>>q;
	vector<pair<int,int > > store(n);
	for(int i=0;i<n;i++)
	{
		cin>>store[i].first;
		store[i].second=i+1;
	}
	sort(store.begin(),store.end());
	int group[n+1]={0};
	group[store[0].second]=1;
	for(int i=1;i<n;i++)
	{
		group[store[i].second]=group[store[i-1].second];
		if(store[i].first-store[i-1].first>k)group[store[i].second]++;
	}
	while(q--)
	{
		int i,j;
		cin>>i>>j;
		if(group[i]==group[j])cout<<"Yes\n";
		else cout<<"No\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1; 
//	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

