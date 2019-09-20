#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("1016.txt", "w", stdout);
    int test, n, w, x, y;
    vector<int>vec;

    cin>>test;
    for(int t=1;t<=test;t++)
    {
        int cnt = 1;
        cin>>n>>w;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d", &x, &y);
            vec.push_back(y);
        }

        sort(vec.begin(), vec.end());

        int point = vec[0];

        for(int i=0;i<n;i++)
        {
            if(abs(vec[i] - point)>w)
            {
                point = vec[i];
                cnt++;
            }
        }

        printf("Case %d: %d\n", t, cnt);
        vec.clear();
    }

    return 0;
}
