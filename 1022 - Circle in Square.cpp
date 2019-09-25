
#include<bits/stdc++.h>
using namespace std;

#define M_PI acos(-1.0)

int main()

{
    int i,test;
    double r,pi,ans;

    scanf("%d",&test);
    for(i=1;i<=test;i++)
     {

        scanf("%lf",&r);

        ans= 4*r*r- M_PI *r*r;

        printf("Case %d: %.2lf\n",i,ans);
    }

}
