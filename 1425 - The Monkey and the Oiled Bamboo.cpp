
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("1425.txt", "w", stdout);
    int test, n, w, x, y;
    vector<int>vec, dif;

    cin>>test;
    for(int t=1;t<=test;t++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            scanf("%d", &x);
            vec.push_back(x);
        }

        //int point = vec[0];
        dif.push_back(vec[0]);
        for(int i=1;i<n;i++)
        {
            dif.push_back(vec[i]-vec[i-1]);
        }

        int ans = dif[n-1];

        for(int i=n-2;i>=0;i--)
        {
            if(dif[i]==ans)
            {
                ans++;
            }

            else if(dif[i]>ans)
            {
                ans = dif[i];
            }
        }

        printf("Case %d: %d\n", t, ans);
        vec.clear();
        dif.clear();
    }

    return 0;
}
