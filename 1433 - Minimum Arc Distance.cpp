#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,ox,oy, ax,ay, bx,by ,test;

    double a,b,c,s,theta;

    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%d%d%d%d%d",&ox,&oy,&ax,&ay,&bx,&by);
        a=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        b=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        c=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));


        theta = acos((a*a+b*b-c*c)/(2*a*b));

        s=a*theta;
        printf("Case %d: %lf\n",i,s);
    }
}
