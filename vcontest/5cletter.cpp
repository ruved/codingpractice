#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     string s;
     cin>>s;
     int n=s.length();
     int left[n],right[n];
     if(n)
     {
         left[0]=isupper(s[0])?0:1;
         right[n-1]=islower(s[n-1])?0:1;
          for(int i=1;i<n;++i)
            {
                if(islower(s[i]))
                left[i]=left[i-1]+1;
                else
                left[i]=left[i-1];
            }
            for(int i=n-2;i>=0;--i)
            {
                if(isupper(s[i]))
                right[i]=right[i+1]+1;
                else
                right[i]=right[i+1];
            }
            int r,ans;
            r=left[n-1]<=right[0]?left[n-1]:right[0];
        for(int i=0;i<n-1;++i)
        {
           ans=left[i]+right[i+1];
           if(r>ans)
           r=ans;
        }
        cout<<r<<endl;
     }
    return 0;
    
 }