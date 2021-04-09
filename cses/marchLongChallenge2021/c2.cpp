#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
li arr[500],brr[500],ans=2e10,n,m;

void solve()
{
//	int n,m;
	cin>>n>>m;
	f(i,n)cin>>arr[i];
	f(i,m)cin>>brr[i];
	f(i,512)
	{
		int cnt=0;
		f(j,n)
		{
			bool flag = true;
			f(k,m)
			{
				if((i|(arr[j]&brr[k]))==i)
				{
					flag = false;
					break;
				}
			}
			if(!flag)cnt++;
			else break;
		}
		if(cnt==n)
		{
			cout<<i;
			return;
		}
	}
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1;
//	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

