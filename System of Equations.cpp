#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{

}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n,m,ans=0;
    cin>>n>>m;
    for(int i=0;i<34;i++)
    {
    	for(int j=0;j<34;j++)
    	{
    		if(i+j*j==m&&i*i+j==n)ans++;
		}
	}
	cout<<ans;
}

