#include <bits/stdc++.h>

using namespace std;

#define MULTITEST

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define endl "\n"
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = int(1e9) + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);


void solve()
{
	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	int fr[2]={0};
	for(int i=0;i<n;i++)
	{
		fr[s[i]-'a']++;
		fr[t[i]-'a']++;
	}
	if(fr[0]%2||fr[1]%2)
	{
		cout<<"-1\n";
		return;
	}
	queue<int> a1,a2,b1,b2;
	for(int i=0;i<n;i++)
	{
		if(s[i]==t[i])continue;
		if(s[i]=='a')
		{
			a1.push(i);
			b2.push(i);
		}
		else
		{
			a2.push(i);
			b1.push(i);
		}
	}
	queue<pt> ans;
	for(int i=0;i<n;i++)
	{
		while(!a1.empty()&&a1.front()<=i)a1.pop();
		while(!a2.empty()&&a2.front()<=i)a2.pop();
		while(!b1.empty()&&b1.front()<=i)b1.pop();
		while(!b2.empty()&&b2.front()<=i)b2.pop();
		if(s[i]==t[i])continue;
		if(s[i]=='a')
		{
			if(b2.empty())
			{
				ans.push({b1.front()+1,b1.front()+1});
				s[b1.front()]='a';
				t[b1.front()]='a';
				ans.push({i+1,b1.front()+1});
				b1.pop();
			}
			else
			{
				ans.push({i+1,b2.front()+1});
				t[b2.front()]='a';
				b2.pop();
			}
		}
		else
		{
			if(a2.empty())
			{
				ans.push({a1.front()+1,a1.front()+1});
				s[a1.front()]='b';
				t[a1.front()]='b';
				ans.push({i+1,a1.front()+1});
				a1.pop();
			}
			else
			{
				ans.push({i+1,a2.front()+1});
				t[a2.front()]='b';
				a2.pop();
			}
		}
	}
	cout<<ans.size()<<endl;
	while(!ans.empty())
	{
		cout<<ans.front().x<<" "<<ans.front().y<<endl;
		ans.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1; 
//	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

