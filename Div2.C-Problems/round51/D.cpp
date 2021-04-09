#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li sum=0,n,m;
	cin>>n;
	map<li,int> fr;
//	li sum=0;
	for(int i=0;i<n;i++)
	{
		li x;
		cin>>x;
		sum+=x;
		fr[sum]=1;
	}
	li ans =0 ,curr=0;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		li x;
		cin>>x;
		curr+=x;
		ans += fr[curr];
	}
	if(curr!=sum)
	{
		cout<<-1;
		return;
	}
	cout<<ans;
}

int main()
{
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

