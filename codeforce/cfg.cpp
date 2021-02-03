#include<bits/stdc++.h>
#define m 1000000
using namespace std;


 int main()
{
    vector<int> dp(m+1,INT_MAX);
     
     for(int i=2;i*i<=m;++i)
    {  for(int j=i;j<=m;j+=i)
             if(dp[j]==INT_MAX)  
                    dp[j]=i;
            //cout<<endl;
    }         
     int t;
     cin>>t;
      while(t--)
      {
           int n,k;
            cin>>n>>k;
            while(k--)
            {
                n=n+dp[n];
                //cout<<n<<" ";
            }
            cout<<n<<endl;
      }
      return 0;
 }