#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, test, arr1[10005],arr2[1000], x, xr;

    cin>>test;
    for(int t=1;t<=test;t++)
    {
        xr = 0;
        int x1, x2, def;
        cin>>n;

        for(int i=0;i<n;i++) {

            cin>>arr1[i];
        }

        for(int i=0;i<n;i++) {

            cin>>arr2[i];
        }

        for(int i=0;i<n;i++) {

            def = arr2[i]-arr1[i]-1;
            xr^=def;
        }

        if(xr) printf("Case %d: white wins\n",t);

        else printf("Case %d: black wins\n",t);
    }
}


