#include<bits/stdc++.h>
 using namespace std;
  int main()
  {
      int n,n1,n2;
       cin>>n>>n1>>n2;
       int a[n];
       for(int i=0;i<n;++i)
       cin>>a[i];
       sort(a,a+n,greater<int>());
    double t1=0,t2=0,t3=0,t4=0;
       for(int i=0;i<n1;++i)    t1+=a[i];
       
        for(int i=0;i<n2;++i)   t3+=a[i];
        
        for(int i=0;i<n2;++i)   t2+=a[n1+i];
        
        for(int i=0;i<n1;++i)   t4+=a[n2+i];
        double res;
       if(n1<=n2)
       {
           res=t1/n1+t2/n2;
       }
       else
       res=t3/n2+t4/n1;
       cout<< fixed << setprecision(8)<<res<<endl;
      return 0;
  }