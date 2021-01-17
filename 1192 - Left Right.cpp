#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, test, arr[10005], x, xr;

    cin>>test;
    for(int t=1;t<=test;t++)
    {
        xr = 0;
        //for(int i=0;i<=50;i++) arr[i] = 0;
        int x1, x2, def;
        cin>>n;
        for(int i=1;i<=n;i++) {
            cin>>x1>>x2;
            def = x2-x1-1;
            xr^=def;
        }

        if(xr) printf("Case %d: Alice\n",t);

        else printf("Case %d: Bob\n",t);
    }
}

