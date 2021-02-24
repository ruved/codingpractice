#include<bits/stdc++.h>
using namespace std;
string rpn(string s)
{
    string res;
    stack<char> st;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
        st.push(s[i]);
        else if(s[i]==')')
        {
            res+=st.top();
            st.pop();
            st.pop();
        }
        else
        {
            res+=s[i];
        }   
    }
    return res;
}
int main()
{
    int t;
     cin>>t;
      while(t--)
      {
          cin>>ws;
          string s;
           cin>>s;
           cout<<rpn(s)<<endl;
      }
     return 0;
}