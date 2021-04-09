#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li ans ;
	int n;
	cin>>n;
	ans = pow(10,n+1);
	for(int i=1;i<=9;i++)
	{
		li curr=0,j;
		cin>>j;
		j++;
		while(j--)
		{
			curr = curr*10 + i;
		}
		ans = min(ans,curr);
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

