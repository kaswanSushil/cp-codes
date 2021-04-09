#include <bits/stdc++.h>

using namespace std;
map<int,bool> store;
bool turns(int n)
{
	if(n<10)return true;
	if(store.find(n)!=store.end())return store[n];
	set<int> digits;
	int curr = n;
	while(curr)
	{
		digits.insert(curr%10);
		curr/=10;
	}
	set<int> :: iterator it;
	for(it=digits.begin();it!=digits.end();++it)
	{
		if(*it==0)continue;
		if(!turns(n-*it))
		{
			return store[n]=true;
		}
	}
	return store[n]=false;
}


int main()
{
	int n;
	cin>>n;
	int curr = n;
	if(n<10)
	{
		cout<<"1 "<<1;
		return 0;
	}
	set<int> digits;
	while(curr)
	{
		digits.insert(curr%10);
		curr/=10;
	}
	set<int> :: iterator it;
	for(it=digits.begin();it!=digits.end();++it)
	{
		if(*it==0)continue;
		if(!turns(n-*it))
		{
			cout<<1<<endl<<*it;
			return 0;
		}
	}
	cout<<2;
}
