
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    int arr[105];

    int test, xr = 0;

    cin>>test;
    for(int t=1;t<=test;t++)
    {
        xr = 0;
        bool checkOne = 1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]!=1) checkOne = 0;
            xr^=arr[i];
        }

        printf("Case %d: ",t);
        if(checkOne)
        {
            if(n&1) cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }

        else
        {

            if(xr==0) cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }

    }

}
