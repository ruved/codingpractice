#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
    int n;
     cin>>n;
     int x,y,z;
     bool f=true;
     for(int i=0;i<n;++i)
     {
         cin>>x>>y>>z;
         if(x+y+z!=0)
         f=false;
     }

     if(f)
     cout<<"YES";
     else
     cout<<"NO";
     
  return 0;
 }