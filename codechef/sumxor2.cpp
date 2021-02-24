#include<bits/stdc++.h>
using namespace std;
void fun(vector<int>&a,vector<int>&xsum)
{
    int n=a.size();
    queue<pair<int,int> >q;
    int s=0;
    for(int i=0;i<n;++i)
        q.push(make_pair(i,a[i]));

    int level=1;
    xsum[0]=0;
    while(!q.empty())
    {
        int ls=q.size();
        pair<int,int> p;
        s=0;
        for(int i=0;i<ls;++i)
        {
            p=q.front();
            s+=p.second;
            q.pop();
            for(int j=p.first+1;j<n;++j)
            q.push(make_pair(j,p.second^a[j]));
        }
        xsum[level]=s+xsum[level-1];
        level++;
    }

}
int main()
{
    int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;++i)
     cin>>a[i];
    vector<int> xsum(n+1);
    fun(a,xsum);
    int q;
     cin>>q;
     while(q--)
     {
         int m;
          cin>>m;
          cout<<xsum[m]<<endl;
     }
    return 0;
}