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
             int even=0;
             
             for(int i=0;i<n;++i)
             if((a[i]&1)==0)
                even++;
             
             if(even!=n)
             cout<<even<<endl;
             else
             cout<<"-1\n";
       }
      return 0;
 }