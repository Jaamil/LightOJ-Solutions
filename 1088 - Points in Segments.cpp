
#include<bits/stdc++.h>
using namespace std;

#define mx 100005

int main()
{
    int test, n, p1, p2, temp, q;
    vector<int>vec;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        scanf("%d%d", &n, &q);
        for(int i=0;i<n;i++)
        {
            scanf("%d", &temp);
            vec.push_back(temp);
        }

        sort(vec.begin(), vec.end());
        printf("Case %d:\n", t);
        for(int i=0;i<q;i++)
        {
            scanf("%d%d", &p1, &p2);
            auto it1 = lower_bound(vec.begin(), vec.end(), p1);
            auto it2 = upper_bound(vec.begin(), vec.end(), p2);

            printf("%d\n", distance(it1,it2));

        }

        vec.clear();
    }
}
