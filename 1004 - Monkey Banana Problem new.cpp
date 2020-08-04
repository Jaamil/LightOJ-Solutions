

#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<int>v[205];
int allmask = 0, n = 0;
int dp[205][205];

void initialize()
{
    for(int i=0;i<2*n-1;i++)
    {
        v[i].clear();
    }

    memset(dp, -1, sizeof dp);
}

int banana(int i, int j)
{

    if(j==0 and i==2*n-2)
    {
        return v[i][j];
    }

    if(dp[i][j]!=-1) return dp[i][j];


    int ans = 0;

    if(i<n-1)
    {
        ans = v[i][j] + max(banana(i+1, j), banana(i+1, j+1));
    }

    else{
        if(j==0) ans = v[i][j] + banana(i+1, j);
        else if(j==v[i].size()-1) ans = v[i][j] + banana(i+1, j-1);
        else{
            ans = v[i][j] + max(banana(i+1, j), banana(i+1, j-1));
        }
    }

    dp[i][j] = ans;
    return ans;
}

int main()
{
    int T, x;

    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n;

        initialize();

        int i;
        for(i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
               cin>>x;
               v[i].push_back(x);
            }
        }

        int k=1;
        for(i;i<2*n-1;i++, k++)
        {
            for(int j=0;j<n-k;j++)
            {
               cin>>x;
               v[i].push_back(x);
            }
        }


        printf("Case %d: ", t);

        cout<<banana(0, 0)<<endl;

    }

    return 0;
}
