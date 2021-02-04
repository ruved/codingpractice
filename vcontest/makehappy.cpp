#include<bits/stdc++.h>
using namespace std;


int main()
{
    int b,g;
    cin>>b>>g;
    vector<bool>boys(b,false),girls(g,false);
     int bh,t,gh;
     cin>>bh;
     for(int i=0;i<bh;++i)
        {
            cin>>t; boys[t]=true;
        }
        cin>>gh;
     for(int i=0;i<gh;++i)
        {
            cin>>t;girls[t]=true;
        }
        for(int i=0;i<max(b,g)+max(b,g);++i)
        {
           if(boys[i%b]||girls[i%g])
         {
             boys[i%b]=true;
             girls[i%g]=true;
         }
        }
        bool res=true;
        for(int i=0l;i<b;++i)
        if(!boys[i])
        {
            res=false; break;
        }
        for(int i=0;i<g&&res;++i)
        if(!girls[i])
        {
            res=false;break;
        }
        
        if(res)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    return 0;
    
}