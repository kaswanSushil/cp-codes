#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n,q,k;
	cin>>n>>q>>k;
	li arr[n+2],store[n+1];
	arr[0]=0;
	store[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	arr[n+1]=k+1;
	for(int i=1;i<=n;i++)
	{
		store[i] = store[i-1] + (arr[i]-arr[i-1])+ (arr[i+1]-arr[i]-1);
	}
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		li ans ;
		if(l==r)
		{
			ans=k;
		}
		else if(r==l+1)
		{
			ans = (arr[r]-1)+(k-arr[l]);
//			cout<<"yes   #####"<<ans<<endl;
		}
		else
		{
			ans = (store[r-1]-store[l]);
			ans += (k-arr[r-1]);
			ans +=(arr[l+1]-1);
		}
		ans -=(r-l+1);
		cout<<ans<<endl;
	}
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

