

#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("1166.txt", "w", stdout);

    int test, n, idx, cnt, x;
    vector<int>vec1, vec2;

    cin>>test;
    for(int t=1;t<=test;t++)
    {
        scanf("%d", &n);
        idx = 0, cnt = 0;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            vec1.push_back(x);
        }

        vec2 = vec1;
        sort(vec2.begin(), vec2.end());

        for(int i=0;i<n;i++)
        {
            if(vec1[i]!=vec2[i])
            {
                auto it = find(vec1.begin(), vec1.end(), vec2[i]);
                cnt++;

                idx = distance(vec1.begin(), it);

                swap(vec1[i], vec1[idx]);
            }
        }

        //for(int i=0;i<vec1.size();i++) cout<<vec1[i]<<" ";
       printf("Case %d: %d\n", t, cnt);

       vec1.clear();
       vec2.clear();
    }
}
