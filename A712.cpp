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
	string s;
	cin>>s;
	int n = s.size();
	int cnt = count(s.begin(),s.end(),'a');
	if(cnt==n)
	{
		cout<<"NO\n";
		return;
	}
	int i=0,j=n-1;
	cout<<"YES\n";
	while(s[i]=='a'&&s[j]=='a')
	{
		i++;
		j--;
	}
	int mid = (n+1)/2;
	if(s[i]!='a'&&s[j]!='a')
	{
		s = s.substr(0,i)+'a' + s.substr(i);
		cout<<s<<"\n";
	}
	else
	{
		s = s.substr(0,i+1)+'a'+s.substr(i+1);
		cout<<s<<"\n";
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

