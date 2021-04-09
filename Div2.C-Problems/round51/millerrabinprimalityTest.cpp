#include<bits/stdc++.h>
using namespace std;

typedef long long int li;

li binpow(li x,li y,li n)
{
	li res = 1;
	while(y)
	{
		if(y&1)res = (res*x)%n;
		x = (x*x)%n;
		y>>=1;
	}
	return res;
}

bool checkComposite(li n,li a , li d , li s)
{
	li x = binpow(a,d,n);
	if(x==1||x==n-1)return false;
	for(int i=1;i<s;i++)
	{
		x = (x*x)%n;
		if(x==n-1)return false;
	}
	return true;
}

bool millerRabin(li n)
{
	if(n < 4)
      return (n == 2 || n == 3);
    li s = 0;
    li d = n-1;
    while((d & 1) == 0)
	{
      d >>= 1;
      s++;
    }
 
    //repeat the miller process untill
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}; //must be true for all the bases
    for (int i=0;i<12;i++)
	{
    	li a = arr[i];
      	if(n == a) return true;
      	if(checkComposite(n, a, d, s))
        return false;
    }
    return true;
}


void solve()
{
	li n;
	cin>>n;
	if(millerRabin(n))cout<<"YES\n";
	else cout<<"NO\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
