
#include<bits/stdc++.h>
using namespace std;


vector<int> createTempArr(string pattern)
{
    vector<int>lps(pattern.length());
    int idx = 0;

    for(int i=1;i<pattern.length();)
    {
        if(pattern[idx]==pattern[i]) {
            lps[i] = idx + 1;
            idx++, i++;
        }

        else{
            if(idx!=0) idx = lps[idx-1];
            else
                lps[i] = idx, i++;
        }

    }

    return lps;
}

int kmp(string text, string pattern)
{
    //bool chk = false;
    vector<int>lps = createTempArr(pattern);
    int i = 0, j = 0, cnt = 0;

    while(i<text.length())
    {
        if(text[i]==pattern[j]) i++, j++;

        else {
            if(j!=0) j = lps[j-1];
            else i++;
        }

        if(j==pattern.length())
        {
            //cout<<(i-pattern.length())<<endl;
            cnt++;
            j = lps[j-1];
            //chk = true;
        }
    }

    return cnt;
    //if(!chk) cout<<"Not Found"<<endl;
}

int main()
{
    string pattern, text;

    //getline(cin,text);
    //getline(cin,pattern);
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        cin>>text;
        cin>>pattern;

        int cnt = kmp(text, pattern);
        printf("Case %d: %d\n", t, cnt);

    }

    return 0;
}
