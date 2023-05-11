#include<bits/stdc++.h>
using namespace std;
class lcm
{
public:
    static const int N=100;
    int dp[N][N];
    vector<char>a;
    vector<char>b;
public:
    int string_taker(vector<char>&s1,vector<char>&s2)
    {
        for(int i=0; i<=s1.size(); i++)a.push_back(s1[i]);
        for(int i=0; i<=s2.size(); i++)b.push_back(s2[i]);
        memset(dp,-1,sizeof(dp));
        return solve(0,0);
    }
    solve(int i,int j)
    {
        if(i==a.size() || j==b.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(a[i]== b[j])return  dp[i][j] =1+solve(i+1,j+1);
        int ans1 = solve(i,j+1);
        int ans2 = solve(i,j+1);
        return dp[i][j]=max(ans1,ans2);
    }
};
int main()
{
    vector<char>a;
    vector<char>b;
    a= {'a','z','y'};
    b= {'a','c','z','0'};
    lcm x;
    cout<<x.string_taker(a,b);
    return 0;
}
