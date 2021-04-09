#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	map<li,int> store;
	int n;
	cin>>n;
	for(int i=0;i<n*2;i++)
	{
		li j;
		cin>>j;
		store[j]++;
	}
	vector<li> arr;
	map<li,int> :: iterator it;
	for(it=store.begin();it!=store.end();++it)
	{
		if(it->first%2!=0||it->second!=2)
		{
			cout<<"NO\n";
			return;
		}
		arr.push_back(it->first);
	}
	li curr = 0;
	for(int i=n-1;i>=0;i--)
	{
		li rem = (arr[i]-curr);
//		cout<<rem<<" ";
//		if(rem<=0)
//		{
//			cout<<"NO\n";
//			return;
//		}
		li tmp = (i+1)*2;
		if(rem<=0||rem%tmp!=0)
		{
		
			cout<<"NO\n";
			return;
		}
		tmp = rem / tmp;
//		cout<<tmp<<" ";
		if(tmp==0)
		{
			cout<<"NO\n";
			return;
		}
		tmp*=2;
		curr += tmp;
	}
	cout<<"YES\n";
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

