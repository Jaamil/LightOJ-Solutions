#include<bits/stdc++.h>
using namespace std;


#define ll long long
int n, m;
int dp[11][11][2];
vector<int>v;

ll solve(int pos, int ln, int tz)
{

    if(pos==m)
    {
        return 1;
    }

    if(pos>m) return 0;

    ll res = 0;

    if(dp[pos][ln][tz]!=-1) return dp[pos][ln][tz];

    for(int i=0;i<=9;i++)
    {
        if(tz==0 and i==0) continue;

        int chk = 0;
        for(int j=0;j<n;j++)
        {
            if(i==v[j]) chk = 1;
        }

        if(chk and pos==0)
        {
            res+=solve(pos+1, i, 1);
        }

        else if(chk and abs(ln-i)<=2)
        {
            res+=solve(pos+1, i, 1);
        }

    }

    dp[pos][ln][tz] = res;

    return res;
}


int main()
{
    int T, x;
    string s;

    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }

        memset(dp, -1, sizeof dp);
        int ans = solve(0, 0, 0);

        printf("Case %d: ", t);
        cout<<ans<<endl;
        v.clear();
    }

    return 0;
}
