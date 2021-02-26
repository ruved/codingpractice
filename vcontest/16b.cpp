/*
B. Simple Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
zscoder loves simple strings! A string t is called simple if every pair of adjacent characters are distinct. For example ab, aba, zscoder are simple whereas aa, add are not simple.

zscoder is given a string s. He wants to change a minimum number of characters so that the string s becomes simple. Help him with this task!

Input
The only line contains the string s (1 ≤ |s| ≤ 2·105) — the string given to zscoder. The string s consists of only lowercase English letters.

Output
Print the simple string s' — the string s after the minimal number of changes. If there are multiple solutions, you may output any of them.

Note that the string s' should also consist of only lowercase English letters.

*/
#include<bits/stdc++.h>
using namespace std;

string three(char a,char &b,char c)
{
    string res="";
    if(a!=b) {
        return res+a;
    }
    if(a==b)
    {
        for(int i=1;i<26;++i)
        {
            char x=('a'+(b-'a'+i)%26);
            if(x!=a&&x!=c)
            {
                b=x;
                return res+a;
            }
        }
    }
}
string findsimplestring(string s)
{
    string res="";
    int i=0;
    int n=s.length();
        if(n==1)
        return s;
        else if (n==2)
        {
            char x='a'+(s[0]-'a'+1)%26;
            if(s[0]==s[1])
            {
                res+=s[0];
                res+=x;
                 return res;
            }
            else return s;
        }
    for(int i=1;i<n;i++)
    {

        res+=three(s[i-1],s[i],s[i+1]);
    }
return res+s[n-1];
}
int main()
{
    string s;
     cin>>s;
     cout<<findsimplestring(s);
    return 0;
}