#include<bits/stdc++.h>
#define ll long long
using namespace std;
 //length of the longest palindrome substring
 //recursive
 int longestpal(string s,int i,int j,int count)
 {
     if(i>j) return count;
     if(i==j) return count+1;
     if(s[i]==s[j])
     {
         return max(max(longestpal(s,i,j-1,0),longestpal(s,i+1,j,0)),longestpal(s,i+1,j-1,count+2));
     }
     else
         return max(longestpal(s,i,j-1,0),longestpal(s,i+1,j,0));
 }

//return the longest palindromic substring
string lps(string s)
{
    return s;
}

 int main()
 {
     int t;
      cin>>t;
      while(t--)
      {
           string s;
            cin>>s;
            cout<<longestpal(s,0,s.length()-1,0)<<endl;
      }
  return 0;
 }