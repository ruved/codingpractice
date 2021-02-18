#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,res;
     cin>>n;
     int a[n];
     for(int i=0;i<n;++i)
     cin>>a[i];
     map<int,int>mp;
     for(int i=0;i<n;++i)
        mp[a[i]]++;
    for(int i=1;i<=n;++i)
        if(mp.find(i)==mp.end())
        res++;
     cout<<res<<endl;
    return 0;
}