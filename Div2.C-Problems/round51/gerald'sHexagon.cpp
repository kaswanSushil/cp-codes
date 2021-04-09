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
	li arr[6];
	li gcd;
	cin>>gcd;
	arr[0]=gcd;
	for(int i=1;i<6;i++)
	{
		cin>>arr[i];
		gcd = __gcd(gcd,arr[i]);
	}
	sort(arr,arr+6);
	if(arr[0]==arr[5])
	{
		cout<<6*gcd;
		return 0;
	}
	li n = arr[5];
	cout<<(n+1)*(n+1)+2*n;
}

