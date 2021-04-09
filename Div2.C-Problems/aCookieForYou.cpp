#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li a,b,c,d;
	cin>>a>>b>>c>>d;
	li sum = a+b;
	a = min(a,b);
	if(a<d||sum<c+d)cout<<"No\n";
	else cout<<"Yes\n";
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

