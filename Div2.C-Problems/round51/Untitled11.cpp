#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	li sum=0,n,m;
	cin>>n;
	li arr[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	cin>>m;
	li brr[m+2];
	for(int i=0;i<m;i++)
	{
		cin>>brr[i];
		sum-=brr[i];
	}
//	cout<<sum<<endl;
	if(sum)
	{
		cout<<-1;
		return;
	}
	arr[n]=arr[n+1]=brr[n]=brr[n+1]=0;
	li a = arr[0],b=brr[0];
	int ans=0;
	int i=1,j=1;
	while(i<=n&&j<=m)
	{
		if(a==b)
		{
			ans++;
			a = arr[i++];
			b = brr[j++];
		}
		else if(a>b)b+=brr[j++];
		else a += arr[i++];
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

