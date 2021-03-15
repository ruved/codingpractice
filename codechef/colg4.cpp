#include<bits/stdc++.h>
#define ll long long
using namespace std;
 int fun(int n,int e,int h,int a,int b,int c)
 {
     if(n<=0) return 0;
     int ans=INT_MAX;
     if(n<=e&&n<=h)
        ans=min(ans,n*c);
     if(2*n<=e)
        ans=min(ans,n*a);
     if(3*n<=h)
        ans=min(ans,n*b);
        int x;
     if(((h-n)/2)>=1&&((h-n)/2)>=(n-e))
    {
        if((b-c)<0)
        {
            x=min(n-1,(h-n)/2);
            ans=min(ans,(b-c)*x+n*c);
        }
        else
        {
            x=max(1,n-e);
            ans=min(ans,(b-c)*x+n*c);
        }       
    }
    if((e-n)>=1&&(e-n)>=(n-h))
    {
        if((a-c)<0)
        {
            x=min(n-1,e-n);
            ans=min(ans,(a-c)*x+n*c);
        }
        else
        {
            x=max(1,n-h);
            ans=min(ans,(a-c)*x+n*c);
        }
    }
    if((e/2)>=1&&(e/2)>=((3*n-h+2)/3))
    {
        if((a-b)<0)
        {
            x=min(n-1,e/2);
            ans=min(ans,(a-b)*x+n*b);
        }
        else
        {
            x=max(1,(3*n-h+2)/3);
            ans=min(ans,(a-b)*x+n*b);
        }
    }
    if(e>=3&&h>=4&&n>=3)
       { 
           int z=fun(n-3,e-3,h-4,a,b,c);
           if(z!=INT_MAX)
           z+=a+b+c;
           ans=min(ans,z);
           
       }
    return ans;
 }
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        int n,e,h,a,b,c;
        cin>>n>>e>>h>>a>>b>>c;
        int y=fun(n,e,h,a,b,c);
        if(y==INT_MAX)
            cout<<"-1\n";
        else
            cout<<y<<endl;
     }
     
    
  return 0;
 }