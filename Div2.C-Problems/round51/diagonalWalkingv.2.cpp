#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li n,m,k;
	cin>>n>>m>>k;
	if(max(n,k)>k)
	{
		cout<<-1<<"\n";
		return;
	}
	li mi = min(n,m);
	k = k - max(n,m);
	cout<<max(n,m) + k/2 - k%2<<endl;
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

