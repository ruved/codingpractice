#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int t,n;
      cin>>t;
      while(t--)
      {
        ll n;
          cin>>n;
        ll result=0;
        ll temp=n%4;
        ll v[]={20,36,51,60};
        if(temp==0)
        {
          result=44*(n/4);
          result+=16;
        }
        else
        {
           result=44*(n/4);
           result+=4*(4-temp);
           result+=v[temp-1];
        }
      cout<<result<<endl;
      }
  return 0;
 }