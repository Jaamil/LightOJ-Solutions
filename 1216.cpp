#include<bits/stdc++.h>
using namespace std;

#define M_PI acos(-1.0)

int main()

{
    int i,test,r1,r2,h,p;
    double x,r3,v;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%d%d%d",&r1,&r2,&h,&p);
        x=1.0*(h-p)*(r1-r2)/h;
        r3=r1-x;

        v=M_PI*p*(r2*r2+r2*r3+r3*r3)/3;
        printf("Case %d: %lf\n",i,v);
    }

}

