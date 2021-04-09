#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
void solve()
{
	int n;
	cin>>n;
	queue<int> odd,even;
	for(int i=0;i<2*n;i++)
	{
		int j;
		cin>>j;
		if(j&1)odd.push(i+1);
		else even.push(i+1);
	}
	if(odd.size()%2==1)
	{
		odd.pop();
		even.pop();
	}
	else if(odd.size())
	{
		odd.pop();
		odd.pop();
	}
	else
	{
		even.pop();
		even.pop();
	}
	while(!odd.empty())
	{
		cout<<odd.front();
		odd.pop();
		cout<<" "<<odd.front()<<endl;
		odd.pop();
	}
	while(!even.empty())
	{
		cout<<even.front();
		even.pop();
		cout<<" "<<even.front()<<endl;
		even.pop();
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

