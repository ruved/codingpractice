#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int n,t;
      cin>>n>>t;
    string s;
      cin>>s;
      while(t--)
      {
for(int i=0;i<n-1;++i)
    {
        if(s[i]=='B'&&s[i+1]=='G')
        {          
                int c=s[i];
                s[i]=s[i+1];
                s[i+1]=c;
                i++;
        }
    }
      }
    
    cout<<s;
  return 0;
 }