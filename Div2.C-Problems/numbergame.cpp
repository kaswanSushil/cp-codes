#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

bool isprime(li n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return false;
	}
	return true;
}

void solve()
{
	li n;
	cin>>n;
	if(n==2)
	{
		cout<<"Ashishgup\n";
		return;
	}
	else if(n==1)
	{
		cout<<"FastestFinger\n";
		return;
	}
	if(n&1)
	{
		cout<<"Ashishgup\n";
		return;
	}
	int cnt=0;
	while(n%2==0)
	{
		cnt++;
		n/=2;
	}
	if(cnt>1&&n!=1) cout<<"Ashishgup\n";
	else
	{
		if(n==1||isprime(n))cout<<"FastestFinger\n";
		else cout<<"Ashishgup\n";
	}
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

