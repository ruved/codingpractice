#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int t;
     cin>>t;
      while(t--)
      {
        int n,k;
        cin>>n>>k;
        string s;
            cin>>s;
        
        bool b=false;
        for(int i=0;i<=n/2;++i)
            if(s[n-i-1]!=s[i])
                b=true;
        
        if((2*k)>=n)
            {cout<<"NO\n"; continue;}
        if(!b||k==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
            
      }
  return 0;
 }