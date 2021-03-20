#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 bool checkshuffle(string s1,string s2,string result)
 {
     if(s1.length()+s2.length()!=result.length()) return false;
     int j=0,k=0;
     for(int i=0;i<result.length();++i)
     {
         if(j<s1.length()&&s1[j]==result[i])
            j++;
        else if(k<s2.length()&&s2[k]==result[i])
            k++;
        else
        return false;
     }
     return true;
 }
 int main()
 {
     int t;
      cin>>t;
      while(t--)
      {
           string s1,s2,result;
            cin>>s1>>s2>>result;
            if(checkshuffle(s1,s2,result))
            cout<<"Yes\n";
            else
            cout<<"No\n";
      }
  return 0;
 }