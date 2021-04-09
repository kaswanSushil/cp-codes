#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

int setbits(li n)
{
	int ans=0;
	while(n)
	{
		ans += n%2;
		n>>=1;
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    li n,p;
    cin>>n>>p;
    li sum = 0,mul=1;
    for(int i=1;;i++)
    {
    	li curr = n - p*i;
    	sum += mul;
    	mul*=2;
//    	cout<<curr<<endl;
    	if(curr<sum)
    	{
    		cout<<-1;
    		return 0;
		}
    	if(setbits(curr)<=i)
    	{
    		cout<<i;
    		return 0;
		}
		
	}
    
    
}

