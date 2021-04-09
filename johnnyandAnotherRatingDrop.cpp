#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
map<li,li> val;
void solve()
{
	li n,ans=0,ad=1;
	cin>>n;
	li res=0;
while(n){
    res+=n;
    n/=2;
}
	
	cout<<res<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	
	val[0]=0;
	li curr=1,ad=1;
	while(ad<64)
	{
		for(int i=1;i<ad;i++)val[ad]+=val[i];
		val[ad]+=ad;
		ad++;
	}
	
    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

