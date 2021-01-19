#include<bits/stdc++.h>
using namespace std;

int visit[22][22];
int FW[22];

int main()
{
    //freopen("1303.txt", "w", stdout);
    int T, n, m, x;
    vector<int>v;
    queue<int>q1, q2;

    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int cnt = 0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            q1.push(i);
        }

        bool chk = 1;

        while(1)
        {
            for(int i=1;i<=m;i++)
            {
                if(FW[i]!=0){
                    q1.push(FW[i]);
                    FW[i] = 0;
                }

                bool lchk = 0;
                while(q1.size())
                {
                    int frnt = q1.front();
                    q1.pop();

                    if(visit[i][frnt]==0)
                    {
                        FW[i] = frnt;
                        visit[i][frnt] = 1;
                        lchk = 1;
                    }

                    if(lchk)
                    {
                        while(q1.size())
                        {
                            q2.push(q1.front());
                            q1.pop();
                        }
                    }

                    else
                        q2.push(frnt);
                }

                q1 = q2;
                while(q2.size()) q2.pop();

                chk = 1;
                for(int i=1;i<=m;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        if(visit[i][j]==0)
                        {
                            chk = 0;
                            break;
                        }
                    }
                }

                cnt++;
                if(chk)
                {
                    int ase = q1.size();
                    for(int i=1;i<=m and ase<n;i++){
                        if(FW[i]!=0)
                        {
                            ase++;
                        }
                        cnt++;
                    }

                    break;
                }


            } //end for loop


            if(chk) break;

        } // end while loop

        for(int i=0;i<=m;i++)
        {
            FW[i] = 0;
            for(int j=0;j<=n;j++)
            {
                visit[i][j] = 0;
            }
        }

        printf("Case %d: ", t);
        cout<<cnt*5<<endl;
        while(q1.size()) q1.pop();
        while(q2.size()) q2.pop();
    }

    return 0;
}
