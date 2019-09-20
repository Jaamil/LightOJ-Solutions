
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string>Stackfor;
    stack<string>Stackback;
    string s;
    string ns;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        printf("Case %d:\n",i);
        //int k=1;
        Stackback.push("http://www.lightoj.com/");
        while(cin>>s)
        {
            //if(k==1) printf("Case 1:\n");
            //k++;
            if(s=="QUIT") break;

            if(s=="VISIT")
            {
                cin>>ns;
                Stackback.push(ns);
                cout<<Stackback.top()<<endl;
                while(!Stackfor.empty()) Stackfor.pop();

            }

            if(s=="BACK")
            {
                if(Stackback.size()!=1)
                {
                    Stackfor.push(Stackback.top());
                    Stackback.pop();
                    cout<<Stackback.top()<<endl;

                }
                else{

                    cout<<"Ignored"<<endl;
                }
            }

            if(s=="FORWARD")
            {
                if(Stackfor.size()!=0)
                {
                    Stackback.push(Stackfor.top());
                    Stackfor.pop();
                    cout<<Stackback.top()<<endl;

                }
                else cout<<"Ignored"<<endl;
            }

        }

        while(!Stackfor.empty()) Stackfor.pop();
        while(!Stackback.empty()) Stackback.pop();
    }

    return 0;
}
