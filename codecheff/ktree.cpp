#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 int main()
 {
     ll t;
     cin>>t;
      while(t--)
      {
       ll n,k;
        cin>>n>>k;
        vector<vector<ll> >edge(n+1);
        ll source,dest;
        for(ll i=0;i<n;++i)
        {
            cin>>source>>dest;
            edge[source].push_back(dest);
        }
        if(edge[1].size()<=0)
        {
            cout<<"NO\n"; continue;
        }
       
        dfs(edge,1,path);

      }
     return 0;
 }