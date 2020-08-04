#include<bits/stdc++.h>
using namespace std;

int T, n, width, k;
int arr[105], dp[105][105];

int solve(int pos, int move)
{
    if(move>=k || pos>=n) return 0;

    if(dp[pos][move]!=-1) return dp[pos][move];

    int ans, cnt = 0, i;

    for(i=0;i+pos<n;i++)
    {
        if(arr[pos]+width<arr[pos+i]) break;

        cnt++;
    }

    ans = max(cnt+solve(pos+i, move+1), solve(pos+1, move));

    dp[pos][move] = ans;

    return ans;
}

int main()
{

    cin>>T;
    for(int t=0;t<T;t++)
    {
        memset(dp, -1, sizeof dp);
        int x, y;
        //cin>>n>>width>>k;
        scanf("%d%d%d", &n, &width, &k);
        for(int i=0;i<n;i++)
        {
            //cin>>x>>arr[i];
            scanf("%d%d", &x , &arr[i]);
        }

        sort(arr, arr+n);

        printf("Case %d: ", t+1);
        cout<<solve(0,0)<<endl;
    }

    return 0;
}
