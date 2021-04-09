#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

int main()
{
	li n;
	cin>>n;
	li ans ,left = 1,right = (n-1)/2 + 1;
	li h = right;
	while(left<=right)
	{
		li mid = (left+right)/2;
		li k = n,curr=0,t=0;;
		while(k>=10)
		{
			if(t&1)
			{
				k-=(k*10)/100;
			}
			else
			{
				curr += min(k,mid);
				k -= min(k,mid);
			}
			t++;
		}
		curr += k;
		if(curr>=h)
		{
			ans = mid;
			right = mid-1;
		}
		else left = mid+1;
	}
	cout<<ans<<endl;
}

