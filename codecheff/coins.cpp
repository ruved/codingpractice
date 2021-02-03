#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll recur(ll c,ll *dp)
{
    //if(c==0) return 0;
   // if(dp[c]>0) return dp[c];
   // dp[c]=max(c,recur(c/2,dp)+recur(c/3,dp)+recur(c/4,dp));
   
   for(ll i=2;i<=c;++i)
   dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
    return dp[c];
    
}

int main()
{   ll n;
ll dp[1000000001];
memset(dp,0,sizeof(dp));
    dp[1]=1;
    //recur(1000000000,dp);
    int tc=10;
    while(tc--)
    { cin>>n;
        cout<<recur(n,dp)<<endl;
        //cout<<dp[n]<<endl;
    }
    return 0;
}