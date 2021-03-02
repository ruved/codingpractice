#include<bits/stdc++.h>
#define ll long long
using namespace std;
 void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int st=0;
        while(st<n)
        {
            char c=s[st];
            s[st++]=s[n];
            s[n--]=c;
        }
        
    }

 int main()
 {
     vector<char>s;
     char temp;
     cin >> noskipws;
     while(cin>>temp&&(temp!='\n'))
        s.push_back(temp);
     reverseString(s);
     for(int i=0;i<s.size();++i)
        cout<<s[i];
  return 0;
 }