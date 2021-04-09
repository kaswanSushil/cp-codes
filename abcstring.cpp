#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

string s;



bool check(char ch)
{
	int bal=0,n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]==ch)bal++;
		else bal--;
		if(bal<0)return false;
	}
	if(bal==0)return true;
	bal=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==ch)bal--;
		else bal++;
		if(bal<0)return false;
	}
	if(bal==0)return true;
	return false;
}

void solve()
{
	
	cin>>s;
	int perm[6][3];
	perm[0][0]=1,perm[0][1]=-1,perm[0][2]=-1;
	perm[1][0]=-1,perm[1][1]=1,perm[1][2]=-1;
	perm[2][0]=-1,perm[2][1]=-1,perm[2][2]=1;
	perm[3][0]=1,perm[3][1]=1,perm[3][2]=-1;
	perm[4][0]=1,perm[4][1]=-1,perm[4][2]=1;
	perm[5][0]=-1,perm[5][1]=1,perm[5][2]=1;
	bool flag = false;
	for(int i=0;i<6;i++)
	{
		int bal = 0;
		int j=0,n = s.size();
		while(j<n)
		{
			bal += perm[i][s[j]-'A'];
			if(bal<0)break;
			j++;
		}
		if(bal==0)
		{
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
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

