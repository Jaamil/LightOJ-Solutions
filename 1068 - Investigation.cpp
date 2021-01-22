
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int k;
int arr[1005];
int len;
int dp[11][105][105][2];

ll solve(int pos, ll num, ll digitsum, bool flag)
{
    if(pos>len) return (num==0 and digitsum==0);

    int limit = 9;
    if(!flag) limit = arr[pos];

    ll res = 0;

    if(dp[pos][num][digitsum][flag]!=-1) return dp[pos][num][digitsum][flag];

    for(int i=0;i<=limit;i++)
    {
        if(flag or i<limit)
        {
            res+= solve(pos+1, (num*10+i)%k, (digitsum+i)%k,  true);
        }

        else
            res+= solve(pos+1, (num*10+i)%k, (digitsum+i)%k, false);
    }

    dp[pos][num][digitsum][flag] = res;

    return res;
}

int main()
{
    string s1, s2;
    int x1, x2;

    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>x1>>x2;
        cin>>k;
        s1 = to_string(x1-1);
        s2 = to_string(x2);

        if(k>99)
        {
            printf("Case %d: 0\n", t );
            continue;
        }

        for(int i=0;i<s1.size();i++)
        {
            arr[i+1] = s1[i] - '0';
        }

        len = s1.size();

        memset(dp, -1, sizeof dp);
        ll l = solve(1, 0, 0, 0);

        for(int i=0;i<s2.size();i++)
        {
            arr[i+1] = s2[i] - '0';
        }

        len = s2.size();

        memset(dp, -1, sizeof dp);
        ll r = solve(1, 0, 0, 0);

        printf("Case %d: ", t );
        cout<<r - l<<endl;
    }

    return 0;
}
