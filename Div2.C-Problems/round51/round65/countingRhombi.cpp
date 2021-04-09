#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	
	li w,h;
	cin>>w>>h;
	li ans = 0;
	for(int l=1;l*2<=min(h,w);l++)
	{
		int r = w - l*2 +1;
		int t = h - l*2 + 1;
		ans += r*t;
//		cout<<ans<<endl;
	}
	cout<<ans;
}

