#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int n,x,y;
     cin>>n>>x>>y;
     int a[n],b[n];
     for(int i=0;i<n;++i)
     cin>>a[i];
     for(int i=0;i<n;++i)
     cin>>b[i];
     sort(a,a+n);
     sort(b,b+n);
     int c1=0,c2=0,tot=0,sum=0;
     while(tot<n&&c1<x&&c2<y)
     {
         if(a[n-c1-1]>=b[n-c2-1])
         {sum+=a[n-c1-1];c1++;}
         else
         {sum+=b[n-c2-1];c2++;}
        
        tot++;
     }
     while(tot<n&&c1<x)
     {
         sum+=a[n-c1-1];c1++;
         tot++;
     }
     while(tot<n&&c2<y)
     {
         sum+=b[n-c2-1];c2++;
         tot++;
     }
     cout<<sum<<endl;
  return 0;
 }