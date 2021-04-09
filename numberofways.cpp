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
    li sum=0,arr[n];
    bool flag = true;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	sum+=arr[i];
	}
	if(sum%3)
	{
		cout<<0;
		return 0 ;
	}
	sum/=3;
//	cout<<"YES\n";
	li ans = 0,cnt=0,curr=0;
	for(int i=0;i<n-1;i++)
	{
		curr += arr[i];
		if(curr == 2*sum)ans+=cnt;
		if(curr==sum)cnt++;
	}
	cout<<ans;
}

