#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	arr[i]=abs(arr[i]);
	}
	sort(arr,arr+n);
	li ans = 0;
	int left = 0,right=0;
	while(left<n)
	{
		right = max(right,left+1);
		while(right<n&&arr[right]<=arr[left]*2)right++;
		ans += right - left -1;
		left++;
	}
	cout<<ans;
}

