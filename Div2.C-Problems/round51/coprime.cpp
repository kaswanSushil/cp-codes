#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

vector<int> primes;
const int sz = 1e7;
bool visit[sz];
void solve()
{
	string s;
	cin>>s;
	int n = s.size();
	int arr[26]={0};
	for(int i=0;i<n;i++)
	{
		arr[s[i]-'a']++;
	}
	int a=0,b=0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]%2==0)
		{
			if(arr[i]>0)a++;
		}
		else
		{
			if(arr[i]==1)a--;
			else
			{
				arr[i]-=3;
				a += arr[i]/2;
			}
		}
	}
	if(a<0)cout<<"NO\n";
	else cout<<"YES\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

