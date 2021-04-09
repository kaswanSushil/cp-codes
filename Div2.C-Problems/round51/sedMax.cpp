#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	set<int> store;
	for(int i=0;i<n;i++)
	{
		int m1 = arr[i],m2 = 0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>m1)
			{
				m2 = m1;
				m1 = arr[j];
			}
			else if(arr[j]>m2)m2 = arr[j];
			store.insert(m1-m2);
		}
	}
	cout<<store.size()<<endl;
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

