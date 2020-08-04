
#include<bits/stdc++.h>
using namespace std;

string s;
int dp[105][105];

int solve(int i, int j)
{
    if(i>=j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    if(s[i]==s[j]) dp[i][j] = solve(i+1, j-1);

    else{
        dp[i][j] = 1+ min(solve(i, j-1), solve(i+1, j));
    }

    return dp[i][j];
}

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        memset(dp, -1, sizeof dp);
        cin>>s;
        printf("Case %d: ", t);
        cout<<solve(0, s.size()-1)<<endl;
    }

    return 0;
}
