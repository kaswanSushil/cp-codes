#include <bits/stdc++.h>

using namespace std;
const int sz = 1e6+1;
bool yes[sz];
bool can(vector<int> &primes,int n)
{
	for(int i=0;i<primes.size()&&primes[i]<n/2;i++)
	{
		if(yes[n-primes[i]])return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    int arr[t],ma=0;
    for(int i=0;i<t;i++)
    {
    	cin>>arr[i];
    	ma = max(ma,arr[i]);
	}
	memset(yes,true,sizeof(yes));
	vector<int> primes;
	for(int i=2;i<=ma;i++)
	{
		if(yes[i])
		{
			primes.push_back(i);
			for(int j=i+i;j<=ma;j+=i)yes[j]=false;
		}
	}
	cout<<primes.size()<<endl;
	int ans[ma+1];
	int ind=0;
	ans[0]=0;
	for(int i=1;i<=ma;i++)
	{
		ans[i]=ans[i-1];
		if(ind<primes.size()&&i==primes[ind])
		{
			ind++;
			if(can(primes,i))ans[i]++;
		}
	}
	for(int i=0;i<t;i++)cout<<ans[arr[i]]<<endl;
}

