#include<bits/stdc++.h>
using namespace std;
class Frogs
{
int index;
int weight;
int capacity;
public:
Frogs(int i,int w,int c)
{
    index=i;
    weight=w;
    capacity=c;
}
};
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
int n;
    cin>>n;
    int W[n],L[n];
     for(int i=0;i<n;++i) cin>>W[i];
     for(int i=0;i<n;++i) cin>>L[i];

    vector<pair<int,int> >mp(n+1);
   
    for(int i=0;i<n;++i)
        mp[W[i]]=make_pair(i,L[i]);
    
    int res=0;
    for(int i=1;i<=n;++i)
    { 
        for(int j=i+1;j<=n;++j)
        {
            // cout<<mp[i].first<<" "<<mp[j].first<<" :";
            if(mp[j].first<=mp[i].first)
            {
              int r=(mp[i].first-mp[j].first)/mp[j].second;
                  r=r+1;
                 // cout<<i<<" "<<j<<" "<<r<<" : ";
                  res+=r;
                mp[j]=make_pair(mp[j].first+r*mp[j].second,mp[j].second);
                //cout<<mp[j].first<<" :";
            }
        }
    }

   cout<<res<<endl;
     }
    
    return 0;
}