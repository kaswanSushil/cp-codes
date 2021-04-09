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
	li n = 1;
	int j = 48;
	while(j--)
	{
		n*=2;
	}
	li curr=1;
	j=1;
	while(curr*2<n)
	{
		curr*=2;
		j++;
	}
	cout<<j;
}

