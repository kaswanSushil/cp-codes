#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long li;
typedef long double ld;
typedef pair<int, int> pt;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	
	int n;
	cin>>n;
	li right=0,left=0;
	for(int i=0;i<n;i++)
	{
		li x;
		cin>>x;
		right+=x;
		left = max(left,x);
	}
	li ans=0,mid,need = right;
	right*=2;
	while(left<=right)
	{
		mid = (left+right)/2;
		if(need<=mid*(n-1))
		{
			ans = mid;
			right = mid-1;
		}
		else left = mid+1;
	}
	cout<<ans;
}

