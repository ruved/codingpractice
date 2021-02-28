#include<bits/stdc++.h>
#define ll long long
using namespace std;
 bool solve (int a[],int n)
 {
     
     for(int j=0;j<n-1;++j)
     {
         if(a[j]<a[j+1])
             return true;
     }
     return false;
 }
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

            if(solve(a,n))
            cout<<"YES\n";
            else
            {
                cout<<"No\n";
            }
            
       }  
       return 0;
 }