#include<cstdio>
#include<set>
std::set<int>f;
std::multiset<long long>s;
int i,n,x,l,r;
long long a[100001];
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;++i)
		scanf("%d",a+i),a[i]+=a[i-1];
	s.insert(a[n]),f.insert(0),f.insert(n+1);
	for(i=1;i<=n;++i)
	{
		scanf("%d",&x),f.insert(x);
		l=*--f.lower_bound(x);
		r=*f.upper_bound(x);
		s.erase(s.find(a[r-1]-a[l]));
		s.insert(a[x-1]-a[l]);
		s.insert(a[r-1]-a[x]);
		printf("%lld\n",*s.rbegin());
	}
}
