#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int dp[N][N];
string s,t;
int main()
{
    s="azy";
    t="acz0y";
    int n=s.size();
    int m=t.size();
    for(int i=0; i<=n; i++)dp[i][m]=0;
    for(int i=0; i<=m; i++)dp[n][i]=0;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=m-1; j>=0; j--)
        {
            if(s[i]==t[j])dp[i][j]=1+dp[i+1][j+1];
            else
            {
                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
