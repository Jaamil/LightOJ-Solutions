#include<bits/stdc++.h>
using namespace std;

string s;
int dp[1005][1005];

bool isPalindrome(int lo, int hi){

    while(lo<hi)
    {
        if(s[lo]!=s[hi])
        {
            return false;
        }

        lo++;
        hi--;
    }

    return true;
}

int solve(int i, int j){

    if(j>=s.size())
    {
        if(isPalindrome(i, j)) return 0;

        else
            return 100000;
    }


    if(dp[i][j]!=-1) return dp[i][j];

    int ans;

    if(isPalindrome(i, j))
    {
        ans = min(1+solve(j+1, j+1), solve(i, j+1));
    }

    else
    {
        ans = solve(i, j+1);
    }

    dp[i][j] = ans;

    return ans;
}

int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++){

        memset(dp, -1, sizeof dp);

        cin>>s;

        printf("Case %d: ", t+1);
        cout<<solve(0,0)<<endl;
    }

    return 0;
}
