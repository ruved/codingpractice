#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {

string s;
 cin>>s;
 string ans="";
  for(int i=0;i<s.length();++i)
  {
    
     if(s[i]=='-')
    {
         if(s[i+1]=='.')
         ans+="1";
         else
         ans+="2";   
         i++;    
    }
    else if(s[i]=='.')
    ans+="0";
  }
  cout<<ans;
  return 0;
 }