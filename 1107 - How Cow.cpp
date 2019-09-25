#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,n,test,x1,y1,x2,y2,x,y;

    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        printf("Case %d:\n",i);
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        scanf("%d",&n);
        while(n--)
        {
            scanf("%d%d",&x,&y);
            if(x<x1||x>x2||y>y2||y<y1) printf("No\n");
            else printf("Yes\n");
        }
    }
}
