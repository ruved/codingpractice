#include<bits/stdc++.h>
using namespace std;
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
            int res=0;
            for(int i=1;i<n;++i)
              {
                  int ma=max(a[i-1],a[i]);
                  int mi=min(a[i-1],a[i]);
                    if(ma>mi*2)
                    {
                        while(2*mi<ma)
                        {
                            mi=mi*2;
                            res++;
                        }
                    }
            
                }
                cout<<res<<endl;
              }
     return 0;
 }