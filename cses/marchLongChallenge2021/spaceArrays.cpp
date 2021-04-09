#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

void solve()
{
	li sum=0,n;
	cin>>n;
	f(i,n)
	{
		int j;
		cin>>j;
		sum+=j;
	}
	n *=(n+1);
	n/=2;
	if(sum>=n)
	{
		cout<<"Second\n";
	}
	else
	{
		n-=sum;
		n%=2;
		if(n)cout<<"First\n";
		else cout<<"Second\n";
	}
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

