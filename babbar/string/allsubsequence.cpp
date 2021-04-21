#include<bits/stdc++.h>
#define ll long long
using namespace std;
//print in subsequnec in lexigraphical
void printsub(string s,int i,vector<string>&res)
{

}
//print the subsequnec in unordered
 void printsubstring(string s,int i,string res)
 {
    if(i==s.length()) {cout<<res<<" ";return;}
    printsubstring(s,i+1,res);
    printsubstring(s,i+1,res+s[i]);
    
 }
 int main()
 {
     string s;
      cin>>s;
      printsubstring(s,0,"");
  return 0;
 }