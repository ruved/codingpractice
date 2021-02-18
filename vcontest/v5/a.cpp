/*
A. Robot Sequence
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Calvin the robot lies in an infinite rectangular grid. Calvin's source code contains a list of n commands, each either 'U', 'R', 'D', or 'L' — instructions to move a single square up, right, down, or left, respectively. How many ways can Calvin execute a non-empty contiguous substrings of commands and return to the same square he starts in? Two substrings are considered different if they have different starting or ending indices.

Input
The first line of the input contains a single positive integer, n (1 ≤ n ≤ 200) — the number of commands.

The next line contains n characters, each either 'U', 'R', 'D', or 'L' — Calvin's source code.

Output
Print a single integer — the number of contiguous substrings that Calvin can execute and return to his starting square.

Examples
inputCopy
6
URLLDR
outputCopy
2*/
void move(int &x,int &y,char c)
{
        if(c=='U')
            y+=1;
        else if(c=='D')
            y-=1;
        else if(c=='L')
            x-=1;
        else if(c=='R')
            x+=1;
}
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
      cin>>n;
      string s;
        cin>>s;
        int x=0,y=0;
        int res=0;
        for(int i=0;i<s.length()-1;++i)
        {
            move(x,y,s[i]);
            for(int j=i+1;j<s.length();++j)
            {
                move(x,y,s[j]);
                //cout<<x<<" "<<y<<":";
                if(x==0&&y==0)
                    res++;
            }
            x=0;
            y=0;
        }
        cout<<res<<endl;
      return 0;
 }