// B. Pattern
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Developers often face with regular expression patterns. A pattern is usually defined as a string consisting of characters and metacharacters that sets the rules for your search. These patterns are most often used to check whether a particular string meets the certain rules.

// In this task, a pattern will be a string consisting of small English letters and question marks ('?'). The question mark in the pattern is a metacharacter that denotes an arbitrary small letter of the English alphabet. We will assume that a string matches the pattern if we can transform the string into the pattern by replacing the question marks by the appropriate characters. For example, string aba matches patterns: ???, ??a, a?a, aba.

// Programmers that work for the R1 company love puzzling each other (and themselves) with riddles. One of them is as follows: you are given n patterns of the same length, you need to find a pattern that contains as few question marks as possible, and intersects with each of the given patterns. Two patterns intersect if there is a string that matches both the first and the second pattern. Can you solve this riddle?

// Input
// The first line contains a single integer n (1 ≤ n ≤ 105) — the number of patterns. Next n lines contain the patterns.

// It is guaranteed that the patterns can only consist of small English letters and symbols '?'. All patterns are non-empty and have the same length. The total length of all the patterns does not exceed 105 characters.

// Output
// In a single line print the answer to the problem — the pattern with the minimal number of signs '?', which intersects with each of the given ones. If there are several answers, print any of them
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
    int n;
    cin>>n;
    string s[n];

    for(int i=0;i<n;++i)
        cin>>s[i];
    bool b=true;
    string res="",temp="";
    for(int i=0;i<s[0].length();++i)
    {
         b=true;
         set<char>st;
        for(int j=0;j<n;++j)
        {
            if(s[j][i]!='?')
                st.insert(s[j][i]);
        
        }
            if(st.size()==0)
                temp+="a";
            else if(st.size()==1)
                temp+=*st.begin();
            else
            temp+="?";
       
    }
    // if(res.length()<temp.length())
    //         res=temp;
    cout<<temp<<endl;
  return 0;
 }
