#include <bits/stdc++.h>

using namespace std;

#define MULTITEST

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define endl "\n"
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = int(1e9) + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);

void solve()
{
	int n,m;
	cin>>n>>m;
	int arr[n],brr[m],sum1=0,sum2=0;
	forn(i,n)
	{
		cin>>arr[i];
		sum1+=arr[i];
	}
	forn(i,m)
	{
		cin>>brr[i];
		sum2+=brr[i];
	}
	sort(arr,arr+n);
	sort(brr,brr+m);
	if(m==n&&sum1==sum2&&arr[0]==arr[n-1]&&brr[0]==arr[0]&&brr[0]==brr[m-1])
	{
		cout<<"-1\n";
		return;
	}
	int i=0,j=m-1;
	while(sum1<=sum2&&i<n&&j>=0&&arr[i]<brr[j])
	{
		sum1 = sum1 - arr[i] + brr[j];
		sum2 = sum2 - brr[j] + arr[i];
		i++;
		j--;
	}
	if(sum1<=sum2)i=-1;
	cout<<i<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=1; 
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

