#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int t;
      cin>>t;
       while(t--)
       {
           int c;
           cin>>c;
           int d=floor(log2(c));
           long long int a=0,b=0;

           while(d>=0)
           {
               int r=(c>>d)&1;
               //cout<<r<<" ";
               if((c>>d)&1)
               {
                   if(a<=b)
                    {a=(a<<1)|1;b=b<<1;}
                   else
                    {b=(b<<1)|1;a=a<<1;}
               }
               else
               {
                   a=a<<1|1;
                   b=b<<1|1;
               }
               d--;
           }
           long long res=a*b;
            cout<<res<<endl;
       }
  return 0;
 }