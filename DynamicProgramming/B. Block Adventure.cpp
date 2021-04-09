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
	li n,m,k;
	cin>>n>>m>>k;
	int arr[n];
	f(i,n)cin>>arr[i];
	f(i,n-1)
	{
		int diff = arr[i]-arr[i+1];
		if(diff<0)
		{
			diff = abs(diff);
			if(diff>k)
			{
				li need = diff - k;
				if(m<need)
				{
					cout<<"NO\n";
					return;
				}
				else m-= need;
			}
			else
			{
				m+=(arr[i]+k-arr[i+1]);
			}
		}
		else
		{
			m+= arr[i]-arr[i+1];
			m += min(arr[i+1],int(k));
		}
		cout<<m<<" ";
	}
	cout<<"YES\n";
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

