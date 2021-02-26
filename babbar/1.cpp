#include<bits/stdc++.h>
using namespace std;
 
 void swap(char &a,char &b)
 {
     char t=a;
     a=b;
     b=t;
 }
 int main()
 {
     string s;
     cin>>s;
     int l=s.length();
     for(int i=0;i<l/2;++i)
     {
         swap(s[i],s[l-i-1]);
     }
     cout<<s;

      return 0;
 }