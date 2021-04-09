#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int s,arr[3];
	cin>>s;
	for(int i=0;i<3;i++)arr[i];
	int ans=3,curr=0,ma=0;
	int j=0;
	while(j<3)
	{
		if(curr+arr[j]>s)
		{
//			cout<<"YES1\n";
			curr=0;
			ma++;
		}
		curr+=arr[j++];
	}
	ans = min(ans,ma);
	ma = 0;
	curr=0;
	j=2;
	while(j>=0)
	{
		if(curr+arr[j]>s)
		{
//			cout<<"YES2\n";
			curr=0;
			ma++;
		}
		curr +=arr[j--];
	}
	ans = min(ans,ma);
	cout<<ans<<endl;
//cout<<"YES\n";
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

