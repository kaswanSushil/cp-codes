#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr.begin(),arr.end());
	vector<int> brr(n);
	for(int i=1;i<=1024;i++)
	{
		brr = arr;
		for(int j=0;j<n;j++)
		{
			brr[j]^=i;
		}
		sort(brr.begin(),brr.end());
		if(arr==brr)
		{
			cout<<i<<endl;
			return;
		}
	}
	cout<<"-1"<<endl;
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

