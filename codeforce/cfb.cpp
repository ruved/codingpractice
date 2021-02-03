#include<bits/stdc++.h>
 using namespace std;
 bool find(int x,int y,int pre)
 {
     if(x>=y||pre>=y) return true;
     if(x==pre) return false;
        pre=x;
        x=x/2;
        x*=3;
     return find(x,y,pre);
 }
 int main()
 {
     int t;
      cin>>t;
      while(t--)
      {
          int x,y;
           cin>>x>>y;
           int pre=x;
           x=x/2;
           x*=3;
           if(find(x,y,pre))
           cout<<"yes\n";
           else 
           cout<<"No\n";
        
      }
     return 0;
 }