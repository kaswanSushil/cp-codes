#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

bool balanced(string &s1,string &s2)
{
	int a=0,b=0;
	int n = s1.size();
	for(int i=0;i<n;i++)
	{
		if(s1[i]==')')a--;
		else a++;
		if(s2[i]==')')b--;
		else b++;
		if(a<0||b<0)return false;
	}
	return true;
}

void solve()
{
	int n;
	string s;
	cin>>n>>s;
	int cnt = count(s.begin(),s.end(),'0');
	if(s[0]=='0'||s[n-1]=='0'||cnt&1)
	{
		cout<<"NO\n";
		return;
	}
	string ans1(n,'.'),ans2(n,'.');
	int rem = n-cnt;
	int counter=0;
	int a=rem/2;
//	cout<<a<<"\n";
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			if(a>0)ans1[i]=ans2[i]='(';
			else ans1[i]=ans2[i]=')';
			a--;
		}
		else
		{
			if(counter)
			{
				ans1[i]=')';
				ans2[i]='(';
			}
			else 
			{
				ans1[i]='(';
				ans2[i]=')';
			}
			counter^=1;
		}
	}
	if(balanced(ans1,ans2))
	{
		cout<<"YES\n"<<ans1<<"\n"<<ans2<<"\n";
		return;
	}
	cout<<"NO\n";
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

