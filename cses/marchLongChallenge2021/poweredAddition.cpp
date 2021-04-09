#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

li powers[35];

void solve()
{
	int n;
	cin>>n;
	li arr[n];
	f(i,n)cin>>arr[i];
	li tot=0,ans=0;
	for(int i=1;i<n;i++)
	{
		while(arr[i]+tot<arr[i-1])
		{
			ans++;
			tot += powers[ans];
		}
		arr[i]+=tot;
		for(int j=ans;j>0;j--)
		{
			if(arr[i]-powers[j]>=arr[i-1])arr[i]-=powers[j];
		}
	}
	cout<<ans<<"\n";
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	powers[0]=0;
	powers[1]=1;
	for(int i=2;i<35;i++)powers[i]=powers[i-1]*2;
    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

