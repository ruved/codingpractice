#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

int main()
{
    int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;++i)
        cin>>a[i];
    
    long long unsigned res=0;
    for(int i=0;i<n;++i)
    {   
        for(int j=i+1;j<n;++j)
        {
            res=(res%m+(abs(a[i]-a[j])%m*(a[i]+a[j])%m)%m)%m;
        }
    }
    cout<<res;
}