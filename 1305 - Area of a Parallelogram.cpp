#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,test, x1,x2,x3,x4,y1,y2,y3,y4;
    double a,b,c,x,s,h,area,areaP;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);


        x4=(x1+x3)-x2;
        y4=(y1+y3)-y2;

        a=1.0*sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
        b=1.0*sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
        c=1.0*sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

        s=(a+b+c)/2.0;
        area=1.0*sqrt(s*(s-a)*(s-b)*(s-c));
            h= 2.0*area/b;

        areaP=b*h;
        printf("Case %d: %d %d %.0lf\n",i,x4,y4,areaP);
    }
}


