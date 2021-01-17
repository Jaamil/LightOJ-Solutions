#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, test, arr[10005], x, xr;

    cin>>test;
    for(int t=1;t<=test;t++)
    {
        xr = 0;
        for(int i=0;i<=50;i++) arr[i] = 0;

        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                arr[i+1]+=x;
            }

        }

        for(int i=1;i<=n;i++) {
            xr^=arr[i];
        }

        if(xr) printf("Case %d: Alice\n",t);

        else printf("Case %d: Bob\n",t);
    }
}
