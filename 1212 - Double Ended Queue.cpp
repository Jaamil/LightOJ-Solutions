#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>deq;
    string s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        printf("Case %d:\n",i);
        int Size, com;
        cin>>Size>>com;
        for(int j=1;j<=com;j++)
        {

            int no;
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>no;
               if(deq.size()<Size)
               {
                   printf("Pushed in left: %d\n",no);
                   deq.push_front(no);
               }
               else cout<<"The queue is full\n";
            }

            else if(s=="pushRight")
            {
                cin>>no;
               if(deq.size()<Size)
               {
                   printf("Pushed in right: %d\n",no);
                   deq.push_back(no);
               }
               else cout<<"The queue is full\n";
            }

            else if(s=="popLeft")
            {
                if(deq.size()==0) cout<<"The queue is empty\n";
                else
                {
                    printf("Popped from left: %d\n",deq.front());
                    deq.pop_front();
                }
            }

            else if("popRight")
            {
                if(deq.size()==0) cout<<"The queue is empty\n";
                else
                {
                    printf("Popped from right: %d\n",deq.back());
                    deq.pop_back();
                }
            }
        }
	while(!deq.empty()) deq.pop_back();

    }

    return 0;
}
