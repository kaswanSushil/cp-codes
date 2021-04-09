#include<bits/stdc++.h>
using namespace std;
int lcs( char *x, char *y)  
{  
	int n=0,m=0;
	string s1="",s2="";
	while(x[n]!='\0')s1+=x[n++];
	while(y[m]!='\0')s2+=y[m++];
    int L[m + 1][n + 1];  
    int i, j;  
      
    /* Following steps build L[m+1][n+1] in  
       bottom up fashion. Note that L[i][j]  
       contains length of LCS of X[0..i-1] 
       and Y[0..j-1] */
    for (i = 0; i <= n; i++)  
    {  
        for (j = 0; j <= m; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (s1[i - 1] == s2[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    /* L[m][n] contains length of LCS  
    for X[0..n-1] and Y[0..m-1] */
    return L[m][n];  
}
int main()
{
	int n,m;
	cin>>n>>m;
	char s1[n],s2[m];
	for(int i=0;i<n;i++)cin>>s1[i];
	for(int i=0;i<m;i++)cin>>s2[i];
	cout<<lcs(s1,s2);
}
