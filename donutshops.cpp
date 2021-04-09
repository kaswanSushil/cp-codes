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
	string s;
	cin>>s;
	map<int,int> index;
	li ans=0;
	int curr=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+')curr++;
		else curr--;
		if(index.find(curr)==index.end())index[curr]=i+1;
	}
	for(int curr=0;;curr++)
	{
		if(index[-1*curr-1])ans+=index[-1*curr-1];
		else
		{
			ans += s.size();
			break;
		}
	}
	cout<<ans<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

