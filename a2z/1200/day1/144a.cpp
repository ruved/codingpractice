#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}

 int main()
 {
     int n;
      cin>>n;
       int a[n];
        for(int i=0;i<n;++i)
        cin>>a[i];
        
        //search max from the left
        int ma=a[0],maindex=0;
        for(int i=1;i<n;++i)
        {
            if(ma<a[i])
            {
                ma=a[i];
                maindex=i;
            }
        }
        // swapping the maindex 
        int ans=0;
        while(maindex>0)
        {
            swap(a[maindex],a[maindex-1]);
            maindex--;
            ans++;
        }
        //cout<<ans<<endl;
        int mi=a[n-1],miindex=n-1;
        for(int i=n-1;i>=0;--i)
        {
            if(mi>a[i])
            {
                mi=a[i];
                miindex=i;
            }
        }
       // 11 76
        if(miindex<n-1)
        ans+=n-miindex-1;
        cout<<ans;
     
        
      return 0;
 }
