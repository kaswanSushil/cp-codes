#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
int main()
{
	FIO
    int n;
    cin>>n;
    int arr[n];
    f(i,n)cin>>arr[i];
    li ans=0;
    f(i,n-1)
    {
    	int k = arr[i+1];
    	arr[i+1]=max(arr[i],arr[i+1]);
    	ans += arr[i+1]-k;
	}
	cout<<ans;
}

