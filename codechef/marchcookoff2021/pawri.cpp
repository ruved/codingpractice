#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int t;
      cin>>t;
       while(t--)
       {
           string s;
            cin>>s;
            string w="party";
            int i=0,ans=0;
            while(i<s.length())
            {
                int j=0;
                while(j<w.length())
                {
                    if(s[i+j]!=w[j])
                    break;
                    j++;
                }
                if(j==w.length())
                {
                    s[i+2]='w';
                    s[i+3]='r';
                    s[i+4]='i';
                       i=i+j;
                }
                else
                i++;
            }
            cout<<s<<endl;
       }
  return 0;
 }