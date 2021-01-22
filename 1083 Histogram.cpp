#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    vector<int>v;
    stack<int>st;
    int x, mxArea, area;

    cin>>T;
    for(int t=1;t<=T;t++)
    {
        mxArea = 0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }

        for(int i=0;i<n;i++){
            if(st.empty() or v[i]>=v[st.top()])
            {
                st.push(i);
            }

            else{

                while(st.size() and v[i]<v[st.top()])
                {
                    int top = st.top();
                    st.pop();

                    if(st.empty())
                    {
                        area = v[top]*i;
                        mxArea = max(mxArea, area);
                    }

                    else
                    {
                        area = v[top]*(i-st.top()-1);
                        mxArea = max(mxArea, area);
                    }
                }

                st.push(i);
            }
        }

        while(st.size())
        {
            int top = st.top();
            st.pop();

            if(st.empty())
            {
                area = v[top]*n;
                mxArea = max(mxArea, area);
            }

            else
            {
                area = v[top]*(n-st.top()-1);
                mxArea = max(mxArea, area);
            }
        }

        printf("Case %d: ", t);
        cout<<mxArea<<endl;
        v.clear();
    }

    return 0;
}
