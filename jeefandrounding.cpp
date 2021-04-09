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
//typedef long double ld;
typedef pair<int, int> pt;


const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = int(1e9) + 7;
//const ld EPS = 1e-9;
//const ld PI = acos(-1.0);


void solve()
{
	int n;
	cin>>n;
	li sum=0,cnt=0;
	for(int i=0;i<n*2;i++)
	{
		string s;
		cin>>s;
		int k = s.size();
		li curr=0;
		while(k>=0&&s[k]!='.')k--;
		k++;
		s = s.substr(k);
		k = s.size();
		for(int j=0;j<k;j++)
		{
			curr = curr*10+s[j]-'0';
		}
		if(curr)
		{
			sum+=curr;
			cnt++;
		}
	}
//	cnt+=cnt%2;
	cnt/=2;
	li ans=1e10;
	while(cnt<=n)
	{
		li curr = cnt*1000;
		ans = min(ans,abs(curr-sum));
		cnt++;	
		
	}
	double curr = ans;
	curr/=1000;
	cout<<fixed<<setprecision(3)<<curr;
	
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

