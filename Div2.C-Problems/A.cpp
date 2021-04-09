#include <bits/stdc++.h>
using namespace std;

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    li n,m;
    cin>>n>>m;
    n%=6;
    int arr[6][3];
    arr[0][0]=0,arr[0][1]=1,arr[0][2]=2;
    arr[1][0]=1,arr[1][1]=0,arr[1][2]=2;
    arr[2][0]=1,arr[2][1]=2,arr[2][2]=0;
    arr[3][0]=2,arr[3][1]=1,arr[3][2]=0;
    arr[4][0]=2,arr[4][1]=0,arr[4][2]=1;
    arr[5][0]=0,arr[5][1]=2,arr[5][2]=1;
    cout<<arr[n][m];
}

