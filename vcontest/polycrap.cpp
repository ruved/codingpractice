#include<bits/stdc++.h>
using namespace std;
int findday(int m,int n)
{
    int i=1;
    int res=1;
    while(i<=n&&(res<m))
    {
        res+=i;
        i++;
    }
    return i-1;
}
 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;++i)
     cin>>a[i];
     
     sort(a,a+n);
     
     cout<<findday(a[n-1],n)<<endl;
      return 0;
 }