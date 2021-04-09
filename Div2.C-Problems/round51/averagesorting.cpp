#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


int n;

int arr[100001];

bool isdecreasing()
{
	for(int i=1;i<n;i++)
	{
//		cout<<arr[i]<<" "<<arr[i-1]<<endl;;
		if(arr[i]>arr[i-1])return false;
	}
//	cout<<"YES500\n";
	return true;
}

void solve()
{
	
	cin>>n;
	map<int,int> fr;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		fr[arr[i]]=1;
	}
//	cout<<fr.size()<<endl;
	if(fr.size()==1||isdecreasing())
	{
		cout<<"No\n";
		return;
	}
	cout<<"Yes\n";
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

