/*A. Three swimmers
time limit per test1 second
memory limit per test512 megabytes
inputstandard input
outputstandard output
Three swimmers decided to organize a party in the swimming pool! At noon, they started to swim from the left side of the pool.
It takes the first swimmer exactly a minutes to swim across the entire pool and come back, exactly b minutes for the second swimmer and c minutes for the third. Hence, the first swimmer will be on the left side of the pool after 0, a, 2a, 3a, ... minutes after the start time, the second one will be at 0, b, 2b, 3b, ... minutes, and the third one will be on the left side of the pool after 0, c, 2c, 3c, ... minutes.
You came to the left side of the pool exactly p minutes after they started swimming. Determine how long you have to wait before one of the swimmers arrives at the left side of the pool.
Input
The first line of the input contains a single integer t (1≤t≤1000) — the number of test cases. Next t lines contains test case descriptions, one per line.
Each line contains four integers p, a, b and c (1≤p,a,b,c≤1018), time in minutes after the start, when you came to the pool and times in minutes it take the swimmers to cross the entire pool and come back.
Output
For each test case, output one integer — how long you have to wait (in minutes) before one of the swimmers arrives at the left side of the pool.
*/
#include<bits/stdc++.h>
#define llu unsigned long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        llu p,a,b,c,res;
    cin>>p>>a>>b>>c;
    if(p>a)
    a=p%a?a-p%a:0;
    else 
    a=a-p;
    if(p>b)
    b=p%b?b-p%b:0;
    else
    b=b-p;
    if(p>c)
    c=p%c?c-p%c:0;
    else
    c=c-p;
    res=min(min(a,b),c);
    cout<<res<<endl;
    }
    return 0;
}