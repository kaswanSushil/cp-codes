#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<li, li> pt;
void solve()
{
	int n;
	cin>>n;
	map<li,li> fr;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		fr[arr[i]]++;
	}
	vector<pt> store;
	map<li,li> :: iterator it;
	for(it=fr.begin();it!=fr.end();++it)
	{
		store.push_back({it->first,it->first*it->second});
	}
	map<li,int> winners;
	li curr=0;
	for(int i=0;i<store.size()-1;i++)
	{
		curr += store[i].second;
		if(curr<store[i+1].first)
		{
			winners.clear();
		}
		else
		{
			winners[store[i].first]=1;
		}
		
	}
	winners[store[store.size()-1].first]=1;
	vector<int> temp;
	for(int i=0;i<n;i++)
	{
		if(winners[arr[i]])
		{
			temp.push_back(i+1);
		}
	}
	cout<<temp.size()<<endl;
	for(int i=0;i<temp.size();i++)cout<<temp[i]<<" ";
	cout<<endl;
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

