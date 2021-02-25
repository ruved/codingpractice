#include<bits/stdc++.h>
using namespace std;

void finddiv(int n,map<int,int>&mp)
{
    while(n%2==0)
    {
        mp[2]++;
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while (n % i == 0) 
        {          
            mp[i]++;
            n/=i;
        } 
    }
    if(n>2)
    mp[n]++;
}
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
    int n;
        cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];

    map<int,int>mp;
    for(int i=0;i<n;++i)
        finddiv(a[i],mp);

    int res=1;
    map<int,int>::iterator j;
    for(j=mp.begin();j!=mp.end();++j)
        res*=(j->second+1);
    
    cout<<res<<endl;
     }
    
     return 0;
}