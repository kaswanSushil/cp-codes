#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
#define fs(i,s,n) for(int i=s;i<n;i++)

bool cmp(pt &p1,pt &p2)
{
	return p1.second >= p2.second;
}

void solve()
{
	li a,b,c;
	cin>>a>>b>>c;
	li ans = min(a,min(b,c));
	a -= ans;
	b -= ans;
	c -= ans;
	if(a&&b)
	{
		li diff = abs(a-b);
		diff = min(diff,min(a,b));
		if(a>=b)a-=diff;
		else b-=diff;
		a-=diff;
		b-=diff;
		ans += diff ;
		if(a&&b)ans +=(a+b)/3;
	}
	else if(a&&c)
	{
		li diff = abs(a-c);
		diff = min(diff,min(a,c));
		if(a>=c)a-=diff;
		else c-=diff;
		a-=diff;
		c-=diff;
		ans += diff ;
		if(a&&c)ans +=(a+c)/3;
	}
	else if(b&&c)
	{
		li diff = abs(c-b);
		diff = min(diff,min(c,b));
		if(c>=b)c-=diff;
		else b-=diff;
		c-=diff;
		b-=diff;
		ans += diff ;
		if(c&&b)ans +=(c+b)/3;
	}
	cout<<ans;
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

