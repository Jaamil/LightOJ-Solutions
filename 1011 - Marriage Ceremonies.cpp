#include<bits/stdc++.h>
using namespace std;

#define ll long long
int allmask = 0, n = 0;
int dp[70000][20];
int arr[20][20];
int T, x, Case = 0;

void initialize()
{

    for(int i=0;i<allmask;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j] = -1;
        }
    }
}

ll bitMask(int mask, int boyno)
{
    if(mask==allmask) return 0;

    if(boyno>=n) return 0;

    if(dp[mask][boyno]!=-1) return dp[mask][boyno];


    ll ans = 0;

    for(int i=0;i<n;i++)
    {
        if((mask&(1<<i))==0)
        {
            ans = (ll)max(arr[boyno][i] + bitMask((mask|(1<<i)), boyno+1)
                          , ans);
        }
    }

    dp[mask][boyno] = ans;

    return ans;
}

int main()
{

    cin>>T;
    for(int t=1;t<=T;t++)
    {
        ++Case;
        cin>>n;
        allmask = pow(2, n) - 1;

        initialize();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               cin>>x;
              arr[i][j] = x;
            }
        }


        printf("Case %d: ", t);
        cout<<bitMask(0, 0)<<endl;

    }

    return 0;
}
