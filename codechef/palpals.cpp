#include<bits/stdc++.h>
#define ll long long
using namespace std;
 bool findpalstring(string s)
 {
     map<char,int>mp;
     for(int i=0;i<s.length();++i)
     mp[s[i]]++;
     int odd=0,even=0;
     for(auto x=mp.begin();x!=mp.end();++x)
     {
         if(x->second%2)
         {
             even+=x->second/2;
             odd++;
         }
         else
             even+=x->second/2;
     }

     if(odd>even)
     return false;
     else
     return true;
 }
 int main()
 {

    int t;
     cin>>t;
      while(t--)
      {
           string s;
            cin>>s;
            if(findpalstring(s))
            cout<<"YES\n";
            else
            cout<<"NO\n";   
      }
  return 0;
 }