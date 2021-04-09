#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li n,mod = 1e9+7;
	cin>>n;
	if(n<=4)
	{
		cout<<n<<endl;
		return;
	}
	li ans = n%3,k=n/3;
	if(n%3==1)ans=4,k--;
	if(ans==0)ans=1;
	li a = 3;
	while(k)
	{
		if(k&1) ans = (ans*a)%mod;
		a = (a*a)%mod;
		k/=2;
	}
	cout<<ans<<endl;
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

