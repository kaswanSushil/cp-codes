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
	int n;
	cin>>n;
	li arr[n];
	f(i,n)cin>>arr[i];
	li ans=1e18,a=0,b=0,m1=1e18,m2=1e18;
	if(n==2)
	{
		cout<<(arr[0]+arr[1])*n<<endl;
		return;
	}
	a=arr[0],m1=arr[0];
	li ra = n-1,rb=n;
	for(int i=1;i<n;i++)
	{
		if(i&1)
		{
			b+=arr[i];
			rb--;
			m2 = min(arr[i],m2);
		}
		else 
		{
			a += arr[i];
			ra--;
			m1 = min(m1,arr[i]);
		}
		li curr = a + b + m2*rb + m1*ra;
		ans = min(ans,curr);
	}
	cout<<ans<<endl;
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

