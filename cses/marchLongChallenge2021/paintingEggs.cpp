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
	vector<li> A,B;
	int n;
	cin>>n;
	f(i,2*n)
	{
		int u,v;
		cin>>u>>v;
		if(u)A.push_back(abs(u));
		else B.push_back(abs(v));
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	double ans=0.0;
	f(i,n)
	{
		ans += sqrt(A[i]*A[i]+B[i]*B[i]);
	}
	cout<<fixed<<setprecision(16)<<ans<<endl;
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

