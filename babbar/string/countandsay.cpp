#include<bits/stdc++.h>
#define ll long long
using namespace std;
 string countsay(int n)
 {
      string temp="1",ans="1";
     for(int i=2;i<=n;++i)
     {
         ans="";
         for(int j=0;j<temp.length();++j)
         {
             char c=temp[j];
             int count=1;
             while(j+1<temp.length()&&c==temp[j+1])
             {
                 j++;
              count++;
             }
             ans+=to_string(count);
             ans+=c;
         }
         temp=ans;
     }
     return ans;
 }
 int main()
 {
    int n;
     cin>>n;
    cout<<countsay(n)<<endl;

  return 0;
 }