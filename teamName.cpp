#include <bits/stdc++.h>

using namespace std;


void solve()
{
	vector<vector<string> > store(26);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		store[s[0]-'a'].push_back(s.substr(1));
	}
	long ans=0;
	for(int i=0;i<26;i++)
	{
		map<string,int> fr;
		for(int j=0;j<store[i].size();j++)fr[store[i][j]]=1;
		for(int j=i+1;j<26;j++)
		{
			int cnt=0;
			for(int k=0;k<store[j].size();k++)
			{
				cnt+=fr[store[j][k]];
			}
			ans += (store[i].size()-cnt)*(store[j].size()-cnt);
		}
	}
	ans*=2;
	cout<<ans<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

