#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int t;
      cin>>t;
       while(t--)
       {
           int n,k;
            cin>>n>>k;
            int a[n];
             for(int i=0;i<n;++i)
             cin>>a[i];
             sort(a,a+n);
              int i,j,res=0;
                i=0;j=n-1;
                while(j>=0&&a[j]>=k)
                {res++;j--;}
                while(i<j)
                {
                    if((a[i]+a[j])>=k)
                      {
                            res++;
                            j--;
                            i++;
                        }
                        else
                        {
                        i++;
                        }
                                              
                }
                
                
                if(res==0)
                cout<<"-1\n";
                else
                cout<<res<<endl;
       }
      return  0;
 }