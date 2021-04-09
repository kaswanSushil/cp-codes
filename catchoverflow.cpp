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


//const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = int(1e9) + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);
const long long INF = 1ll << 32;

void solve()
{
	li ma = 4294967295;
	li curr=1,ans=0;
	int l;
	cin>>l;
//	cin>>l;
	stack<li> st;
	st.push(1);
	while(l--)
	{
		string s;
		cin>>s;
		if(s=="for")
		{
			int j;
			cin>>j;
			st.push(min(INF,st.top()*j));
		}
		else if(s=="end")st.pop();
		else ans+=st.top();
	}
	if(ans>=INF)cout<<"OVERFLOW!!!";
	else cout<<ans;
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

