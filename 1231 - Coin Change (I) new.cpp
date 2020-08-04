
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int n, S, coin[1005], coinfreq[1005];
vector<int>v;
ll dp[1005][1005];

void initialize(int n, int m)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j] = -1;
        }
    }
}

ll coinChange(int pos, int sum)
{
    if(sum==S)
    {
        return 1;
    }

    if(pos>=n or sum>S) return 0;

    if(dp[pos][sum]!=-1) return dp[pos][sum];

    ll ans = 0;

    for(int i=0;i<=coinfreq[pos] and i*coin[pos]<=S;i++)
    {
        ans+= coinChange(pos+1, sum+coin[pos]*i);
        ans = ans%100000007;
    }

    dp[pos][sum] = ans%100000007;

    return ans%100000007;

}

int main()
{

    int T, x;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>S;
        for(int i=0;i<n;i++)
        {
            cin>>coin[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>coinfreq[i];
        }

        initialize(n, S);

        printf("Case %d: ", t);

        cout<<coinChange(0, 0)<<endl;

    }

    return 0;
}
