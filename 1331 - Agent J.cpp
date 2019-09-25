#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,test;

    double a,b,c,r1,r2,r3,area,thetaC,thetaA,thetaB,s,s1,total,s2,s3;

    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);

        a=r1+r2;
        b=r1+r3;
        c=r3+r2;

        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));

        thetaC=acos((a*a+b*b-c*c)/(2*a*b));



        thetaA=acos((c*c+b*b-a*a)/(2*c*b));


        thetaB=acos((a*a-b*b+c*c)/(2*a*c));
        s3=thetaA/2*r3*r3;
        s1=thetaC/2*r1*r1;
        s2=thetaB/2*r2*r2;
        total=s1+s2+s3;

        printf("Case %d: %lf\n",i,area-total);


    }
}
