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

    li n;
    cin>>n;
    li a=0,b=0;
    for(int i=1,j;i<n;i++)
    {
    	cin>>j;
    	a^=j;
    	b^=i;
	}
	b^=n;
	a^=b;
	cout<<a;
}

