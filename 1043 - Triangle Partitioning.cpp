#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i, test;

    double de,ab,bc,ac,ad,ratio,g;

    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&ratio);

        g=sqrt(1+1/ratio);

        de=1.0*bc/g;
        ad=1.0*ab*de/bc;
        printf("Case %d: %lf\n",i,ad);
    }
}
