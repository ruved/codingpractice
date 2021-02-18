#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
      cin>>t;
      while(t--)
      {
          int n;
           cin>>n;
           int a[n];
           for(int i=0;i<n;++i)
            cin>>a[i];

            int c0=0,c1=0,c2=0;
            for(int i=0;i<n;++i)
            {
                if(a[i]%3==0)
                    c0++;
                else if(a[i]%3==1)
                    c1++;
                else
                       c2++;
            }
            int d=n/3,res=0;
            while(c0!=d||c1!=d||c2!=d)
            {
            if(c2>d)
            {   
                 c0+=(c2-d);
                 res+=(c2-d);
                 c2=d;
                 
            }
            if(c0>d)
            {c1+=(c0-d);
             res+=(c0-d);
            c0=d;
            
             }
             if(c1>d)
            {c2+=(c1-d);
            res+=(c1-d);
            c1=d;
             
             }
           // cout<<c0<<" "<<c1<<" "<<c2<<endl;
            }
            cout<<res<<endl;

      }
     return 0;
 }