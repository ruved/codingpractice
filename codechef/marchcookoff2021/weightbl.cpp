#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int t;
      cin>>t;
      while(t--)
      {
          int w1,w2,x1,x2,m;
          cin>>w1>>w2>>x1>>x2>>m;
          int minw=w1,maxw=w1;
          for(int i=1;i<=m;++i)
          {
              minw+=x1;
              maxw+=x2;
          }
          if(w2>=minw&&w2<=maxw)
          cout<<"1\n";
          else
              cout<<"0\n";
      }
  return 0;
 }