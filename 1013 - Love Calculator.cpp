#include<bits/stdc++.h>
using namespace std;

#define ll long long


string s1, s2;
ll lcs[305][305], dp[105][105][105];

int unq;

void initialize()
{
    for(int i=0;i<=70;i++)
        for(int j=0;j<=40;j++){
            lcs[i][j] = -1;
            for(int k=0;k<40;k++)
            {
                dp[i][j][k] = -1;
            }
        }
}

ll LCS(int i, int j)
{
    if(i<=0 or j<=0) return 0;

    if(lcs[i][j]!=-1) return lcs[i][j];

    ll ret = max(LCS(i-1, j), LCS(i, j-1));

    if(s1[i-1]==s2[j-1])
        ret = max(ret, LCS(i-1, j-1)+1);

    lcs[i][j] = ret;

    return ret;
}

ll solve(int l, int i, int j)
{
    if(l==unq and i==s1.size() and j==s2.size())
    {
        return 1;
    }

    if(l>=unq or (i==s1.size() and j==s2.size()))
    {
        return 0;
    }

    if(dp[l][i][j]!=-1) return dp[l][i][j];

    ll ans = 0;

    if(i==s1.size())
    {
        ans = solve(l+1, i, j+1);
    }

    else if(j==s2.size())
    {
        ans = solve(l+1, i+1, j);
    }

    else if(s1[i]==s2[j])
    {
        ans = solve(l+1, i+1, j+1);
    }

    else{
        ans = solve(l+1, i+1, j) + solve(l+1, i, j+1);
    }

    dp[l][i][j] = ans;

    return ans;

}



int main()
{

    //freopen("1013.txt", "w", stdout);

    int T;

    cin>>T;
    for(int t=1;t<=T;t++)
    {
        initialize();

        int n, m;
        cin>>s1>>s2;

        int retVal = (int) LCS(s1.size(), s2.size());


        unq = s1.size() + s2.size() - retVal;

        printf("Case %d: ", t);

        cout<<s1.size() + s2.size() - retVal<<" ";

        cout<<solve(0, 0, 0)<<endl;

    }

    return 0;
}
