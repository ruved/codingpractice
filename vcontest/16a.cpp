/*
A. Cashier
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya has recently got a job as a cashier at a local store. His day at work is L minutes long. Vasya has already memorized n regular customers, the i-th of which comes after ti minutes after the beginning of the day, and his service consumes li minutes. It is guaranteed that no customer will arrive while Vasya is servicing another customer.

Vasya is a bit lazy, so he likes taking smoke breaks for a minutes each. Those breaks may go one after another, but Vasya must be present at work during all the time periods he must serve regular customers, otherwise one of them may alert his boss. What is the maximum number of breaks Vasya can take during the day?

Input
The first line contains three integers n, L and a (0≤n≤105, 1≤L≤109, 1≤a≤L).

The i-th of the next n lines contains two integers ti and li (0≤ti≤L−1, 1≤li≤L). It is guaranteed that ti+li≤ti+1 and tn+ln≤L.

Output
Output one integer  — the maximum number of breaks.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a;
    cin>>n>>l>>a;

    int t[n],c[n];
    int res=0,lastend=0;
    for(int i=0;i<n;++i)
    cin>>t[i]>>c[i];
    
    if(n>0)
    {
        res=(t[0]-lastend)/a;
        lastend=t[0]+c[0];
    }
    for(int i=1;i<n;++i)
    {
        res+=(t[i]-lastend)/a;
        lastend=t[i]+c[i];
    }
        res+=(l-lastend)/a;
    cout<<res;
    return 0;
}