#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define loop(x,n) for(int x = 0; x < n; ++x)

const int sz = 1e6;
li arr[sz];
int n,k;

bool isvalidodd(li mid)
{
	int cnt=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(c)
		{
			c=0;
			cnt++;
		}
		else
		{
			if(arr[i]<=mid)
			{
				cnt++;
				c=1;
			}
		}
	}
	return cnt>=k;
}

bool isvalideven(li mid)
{
	int cnt=0,c=1;
	for(int i=0;i<n;i++)
	{
		if(c)
		{
			cnt++;
			c=0;
		}
		else
		{
			if(arr[i]<=mid)
			{
				c = 1;
				cnt++;
			}
		}
	}
	return cnt>=k;
}


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>n>>k;
    li ma = 0,mi=1e10,ans;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	ma = max(ma,arr[i]);
    	mi = min(mi,arr[i]);
	}
	ans = ma;
	int left = mi,right = ma;
	while(left<=right)
	{
		li mid = (left+right)/2;
		if(isvalidodd(mid)||isvalideven(mid))
		{
			ans = mid;
			right = mid-1;
		}
		else left = mid+1;
	}
    cout<<ans;
}

