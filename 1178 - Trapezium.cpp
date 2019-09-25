
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,test;
    double a,b,c,d,e,area,total_area,h,s;


    scanf("%d",&test);
    for(i=1;i<=test;i++)
     {

        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        if(a>=c)
        {
            e=a-c;
            s=(b+d+e)/2;
            area=sqrt(s*(s-b)*(s-d)*(s-e));
            h= 2*area/e;
            total_area=(a+c)*h/2;

            printf("Case %d: %.6lf\n",i,total_area);
        }
        else
        {
            e=c-a;
            s=(b+d+e)/2;
            area=sqrt(s*(s-b)*(s-d)*(s-e));
            h= 2*area/e;
            total_area=(a+c)*h/2;

            printf("Case %d: %.6lf\n",i,total_area);

        }

    }

}
