#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	string s;
	cin>>n>>s;
	vector<int> seg;
	int curr = 1;
	char ch = s[0];
	for(int i=1;i<n;i++)
	{
		if(s[i]==ch)curr++;
		else
		{
			seg.push_back(curr);
			curr = 1;
			ch = s[i];
		}
	}
	seg.push_back(curr);
	int left = 0,right = 0,ans=0;
	n = seg.size();
	while(right<n)
	{
		right = max(right,left);
		while(right<n&&seg[right]==1)right++;
		if(right==n)
		{
			ans +=(n-left+1)/2;
			break;
		}
		ans++;
		seg[right]--;
		left++;
	}
	cout<<ans<<"\n";
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

