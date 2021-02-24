#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int t;
      cin>>t;
       while(t--)
       {
         int n,m;
         cin>>n>>m;
         int a[n],b[m];
         for(int i=0;i<n;++i)
          cin>>a[i];

        for(int i=0;i<m;++i)
        cin>>b[i];
        int suma=0,sumb=0;
        for(int i=0;i<n;++i)
          suma+=a[i];

        for(int i=0;i<m;++i)
          sumb+=b[i];

        sort(a,a+n);
        sort(b,b+m);
        int j=m-1,ans=0;
        for(int i=0;i<n;++i)
        {
            if(j<0) break;
            if(suma>sumb) break;
            if(a[i]<b[j])
            {
              suma=suma-a[i]+b[j];
              sumb=sumb-b[j]+a[i];
              ans++;
              j--;
            }
            else
            break;

        }
        if(suma>sumb) cout<<ans<<endl;
        else cout<<"-1\n";

       }
     return 0;
 }