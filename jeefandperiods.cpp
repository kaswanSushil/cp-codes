#include <bits/stdc++.h>

using namespace std;

#define MULTITEST

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define endl "\n"
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = int(1e9) + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);


void solve()
{
	int n,j;
	cin>>n;
	map<int,vector<int> > store;
	for(int i=0;i<n;i++)
	{
		cin>>j;
		store[j].push_back(i);
	}
	map<int,vector<int> > :: iterator it;
	queue<pt> q;
	for(it=store.begin();it!=store.end();++it)
	{
		if(it->second.size()==1)
		{
			q.push({it->first,0});
		}
		else
		{
			int diff = it->second[1]-it->second[0];
			bool flag = true;
			for(int i=2;i<it->second.size();i++)
			{
				if(diff!=it->second[i]-it->second[i-1])
				{
					flag = false;
					break;
				}
			}
			if(flag)q.push({it->first,diff});
		}
	}
	cout<<q.size()<<endl;
	while(!q.empty())
	{
		cout<<q.front().first<<" "<<q.front().second<<endl;
		q.pop();
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

