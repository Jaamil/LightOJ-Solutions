
#include<bits/stdc++.h>
using namespace std;

vector<int>v[1005];
int dp[1005][10], n;

int solve(int pos, int col)
{
    if(pos==n-1) return v[pos][col];

    if(dp[pos][col]!=-1) return dp[pos][col];

    int ans = INT_MAX;

    for(int i=0;i<3;i++)
    {
        if(col!=i)
        {
            ans = min(ans, v[pos][col] + solve(pos+1, i));
        }
    }

    dp[pos][col] = ans;
    return ans;
}

int main()
{
    int T, x;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        memset(dp, -1, sizeof dp);
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>x;
                v[i].push_back(x);
            }
        }

        int ans = INT_MAX;

        for(int i=0;i<3;i++)
        {
           ans = min(ans, solve(0,i));
        }

        printf("Case %d: ", t);
        cout<<ans<<endl;

        for(int i=0;i<n;i++) v[i].clear();
    }

    return 0;
}
