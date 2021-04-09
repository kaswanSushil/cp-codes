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
	vector<li> store;
	li mul = 1,a=0,b=0,n;
	cin>>n;
	while(n)
	{
		if(n%2)
		store.push_back(mul);
		else a += mul,b+=mul;
		mul*=2;
		n/=2;
	}
	fr(i,store.size())
	{
		if(a<=b)a+=store[i];
		else b+=store[i];
	}
	cout<<a*b<<endl;
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

