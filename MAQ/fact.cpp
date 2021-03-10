#include<bits/stdc++.h>
#define ll long long
using namespace std;
 // sum 1 + 1*2 + 2*3*4 + 3*4*5*6 + 4*5*6*7*8....
 ///formula for this (2n)!/(n-1)!
 int main()
 {
     ll n;
      cin>>n;
     ll res=3,prev=2;
      for(int i=2;i<=n;i++)
      {
          prev=(prev/(i-1))*2*i*(2*i-1);
         // cout<<prev<<" ";
          res+=prev;
      }
      cout<<res<<endl;
  return 0;
 }