#include<bits/stdc++.h>
 using namespace std;
 long long mink(long int r,long int a,long int b,long int c,int itr)
 {
     if(itr>=4) return INT_MAX;
     if(r%4==0) {cout<<"Hi"<<itr<<" ";return 0;}
     long long res;
     cout<<r<<" ";
    
     long long a1=a+mink((r+1)%4,a,b,c,itr+1);
     long long b1=b+mink((r+2)%4,a,b,c,itr+1);
     long long c1=c+mink((r+3)%4,a,b,c,itr+1);

        res= min(min(a1,b1),c1);
    //cout<<r<<" "<<res<<":";
    return res;
 }
  int main()
  {
     long int n,a,b,c;
       cin>>n>>a>>b>>c;
       int r=n%4;
       r=(4-r)%4;
     long  int res;
     int t=0;
       res=mink(r,a,b,c,t);
        cout<<res;

       return 0;
  }