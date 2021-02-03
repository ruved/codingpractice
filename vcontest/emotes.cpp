#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    ll  a[n];
     for(int i=0;i<n;++i)
        cin>>a[i];
        
        sort(a,a+n);
        ll res=0;
        
            int i=n-1;
            ll f=a[n-1], s=a[n-2];
          
            ll mul= f*k+s;
            int t=m/(k+1);
            res+=t*mul+(m%(k+1))*f;
            
        cout<<res;
    return 0;
}