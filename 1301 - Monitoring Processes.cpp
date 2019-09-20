#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > classtime;

bool cmp(pair<int,int>a, pair<int , int>b)
{
    if(a.first==b.first) return a.second<b.second;
    else return a.first<b.first;
}

int main()
{
  int test;
  cin>>test;
  for(int k=1;k<=test;k++)
  {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int st, ed;
        cin>>st>>ed;
        classtime.push_back(make_pair(st, -1));
        classtime.push_back(make_pair(ed+1, -2));
    }

    sort(classtime.begin(), classtime.end(), cmp);

    int sz = classtime.size();
    int cnt = 0, maxclass = 0;

    for(int i=0;i<sz;i++)
    {
        if(classtime[i].second == -2) cnt--;
        else cnt++;
        maxclass = max(maxclass,cnt);
    }

    printf("Case %d: %d\n",k,maxclass);
    classtime.clear();
  }

    return 0;
}
