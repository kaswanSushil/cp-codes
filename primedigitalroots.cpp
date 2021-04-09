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


int sum(int n)
{
	int ans=0;
	while(n)
	{
		ans += n%10;
		n/=10;
	}
	return ans;
}
const int sz = 1e6;
int dp[sz];
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	memset(dp,1,sizeof(dp));
	dp[0]=0;
	dp[1]=0;
	for(int i=2;i<sz;i++)
	{
		if(dp[i])
		{
			for(int j=i+i;j<sz;j+=i)dp[j]=0;
		}
	}
    int tc; cin >> tc;
    while(tc)
    {
	int ans = tc;
    while(tc>9)
    {
    	if(dp[tc])break;
    	tc = sum(tc);
	}
	cout<<ans<<" ";
	if(dp[tc])cout<<tc<<endl;
	else cout<<"none\n";
	cin>>tc;
	}
}

