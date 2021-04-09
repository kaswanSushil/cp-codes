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

}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	li arr[]={5,14,9,16};
	for(int i=1;i<=16;i++)
	{
		for(int j=0;j<4;j++)
		{
			int k=i^arr[j];
			cout<<k<<" ";
		}
		cout<<endl;
	}
}

