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
            int sum=0;
            int cnt=0;
            bool flag=false;
            for(int i=0;i<n;++i)
            {   
                if(a[i]>100){
                flag=true;
                break;
                }
                if(a[i]>0)
                    cnt++;
                sum+=a[i];
            }
           if(!flag && sum - 100>=0 && sum - 100<cnt)
           cout<<"YES\n";
           else
           cout<<"NO\n";
     }
      return 0;

 }