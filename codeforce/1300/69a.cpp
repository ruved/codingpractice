#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int n;
      cin>>n;
      int ansx=0,ansy=0,ansz=0,x,y,z;
      
      for(int i=0;i<n;++i)
       {
            cin>>x>>y>>z;
            ansx+=x;
            ansy+=y;
            ansz+z;
        }
        if(ansx==0&&ansy==0&&ansz==0)
        cout<<"YES\n";
        else
            cout<<"NO\n";
  return 0;
 }