#include<bits/stdc++.h>
#define ll long long
using namespace std;
 bool checklap(string s)
 {
     int n=s.length();
       int t=n/2;
       map<char,int>mp;
        for(int i=0;i<t;++i)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t;++i)
        {
            if(mp.find(s[n-i-1])==mp.end())
            return false;
            mp[s[n-i-1]]--;
            if(mp[s[n-i-1]]==0)
            mp.erase(mp.find(s[n-1-i]));
        }
    if(mp.size()==0) return true;
    return false;
 }
 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
         cin>>s;
         if(checklap(s))
            cout<<"YES\n";
         else
            cout<<"NO\n";
         
    }
  return 0;
 }