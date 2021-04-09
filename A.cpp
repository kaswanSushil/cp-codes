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
	li n;
	cin>>n;
	vector<li> store;
	for(li i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			li curr=1;
			while(n%i==0)
			{
				curr*=i;
				n/=i;
			}
			store.push_back(curr);
		}
	}
	if(n>1)store.push_back(n);
	li a=1,b=1;
	sort(store.begin(),store.end(),greater<li>());
	n = store.size();
	f(i,n)
	{
		if(a<=b)a*=store[i];
		else b*=store[i];
	}
	cout<<a<<" "<<b;
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

