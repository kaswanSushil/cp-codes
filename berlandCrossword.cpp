#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n,u,r,d,l;
	cin>>n>>u>>r>>d>>l;
	for(int i=0;i<16;i++)
	{
		int w=u,x=r,y=d,z=l;
		int k = i;
		for(int j=0;j<4;j++)
		{
			if(j==0)
			{
				w -= k%2;
				z -= k%2;
			}
			if(j==1)
			{
				w -= k%2;
				x-= k%2;
			}
			if(j==2)
			{
				x -= k%2;
				y-= k%2;
			}
			if(j==3)
			{
				y-= k%2;
				z -= k%2;
			}
			k/=2;
		}
		if((x>=0&&x<=n-2)&&(y>=0&&y<=n-2)&&(z>=0&&z<=n-2)&&(w>=0&&w<=n-2))
		{
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
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

