#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
     cin>>t;
      while(t--)
      {
           int n,x,a,b;
            cin>>n>>x>>a>>b;
            int dx,dy;
            if(a<b)
            {
                 dx=a-1;
                 dy=n-b;
            }
            else {
                 dx=b-1;
                 dy=n-a;
            }

            int r=x-dx-dy;
               if(r==0||r>0)
               cout<<n-1;
               else cout<<abs(b-a)+x;
      }
     return 0;
}