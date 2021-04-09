#include <bits/stdc++.h>

using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int arr[n],ma=0,brr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i]>>brr[i];
    	ma = max(ma,arr[i]);
	}
	int prime[ma+1];
	prime[0]=0,prime[1]=0;
	bool visit[ma+1];
	memset(visit,true,sizeof(visit));
	for(int i=2;i<=ma;i++)
	{
		prime[i]=prime[i-1];
		if(visit[i])
		{
			prime[i]++;
			for(int j=i;j<=ma;j+=i)visit[j]=false;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(prime[arr[i]]<=brr[i])
		{
			cout<<"Chef\n";
		}
		else cout<<"Divyam\n";
	}
}

