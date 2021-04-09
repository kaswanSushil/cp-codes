#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

void solve()
{
	int n,m;
	string s;
	cin>>n>>m>>s;
	if(n%m)
	{
		cout<<"-1\n";
		return;
	}
	int fr[26]={0};
	f(i,n)
	{
		fr[s[i]-'a']++;
	}
	bool flag=true;
	f(i,26)
	{
		if(fr[i]%m)
		{
			flag = false;
		}
	}
	if(flag)
	{
		cout<<s<<"\n";
		return;
	}
	for(int i=n-1;i>=0;i--)
	{
		fr[s[i]-'a']--;
		for(int j=s[i]-'a'+1;j<26;j++)
		{
			fr[j]++;
			int need = 0;
			f(k,26)need += (m-fr[k]%m)%m;
			int rem = n-i-1;
			if(need>rem)
			{
				
			}
			else
			{
				int left = rem - need;
				if(left%m==0)
				{
					cout<<s.substr(0,i);
					cout<<char('a'+j);
					while(left--)cout<<"a";
					f(k,26)
					{
						while(fr[k]%m!=0)
						{
							cout<<char('a'+k);
							fr[k]++;
						}
					}
					cout<<"\n";
					return;
				}
			}
			fr[j]--;
		}
	}
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

