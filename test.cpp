#include <bits/stdc++.h>

using namespace std;


int main() 
{
	int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	long long int ans=1e18;
	for(long j=1;;j++)
	{
		bool flag = true;
		long long int mul=1,curr=0;
		for(int i=0;i<n;i++)
		{
			curr+=abs(mul-arr[i]);
			mul*=j;
			if(mul>1e9)
			{
				flag = false;
				break;
			}
		}
		if(curr<ans&&flag)ans=curr;
		else break;
//		cout<<ans<<endl;
	}
	cout<<ans;
}

