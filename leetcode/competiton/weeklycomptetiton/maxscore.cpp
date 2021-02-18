#include<bits/stdc++.h>
using namespace std;
int find(int f,int s,int th,vector<vector<vector<int> > >&dp)
    {

        if((f<=0&&s<=0)||(f<=0&&th<=0)||(s<=0&&th<=0)) return -1;
         cout<<"hi1";
        if(f<=0) return min(th,s);
        if(s<=0) return min(f,th);
        if(th<=0) return min(f,s);
          cout<<"hi2";
        if(f==1&&s==1&&th==1)
            return 1;
        if(dp[f][s][th]!=-1)
            return dp[f][s][th];
        else
            dp[f][s][th]=1+max(find(f-1,s,th-1,dp),find(f,s-1,th-1,dp));
        cout<<dp[f][s][th]<<" ";
        return dp[f][s][th];
    }
    int maximumScore(int a, int b, int c) {
        vector<vector<vector<int> > >dp(a,vector< vector<int> >(b,vector<int>(c,-1)));
        
        cout<<"hi";
        return 1+max(max(find(a-1,b-1,c,dp),find(a,b-1,c-1,dp)),find(a-1,b,c-1,dp));
    }
    int main()
    {
         int a,b,c;
         cin>>a>>b>>c;
         int res=maximumScore(a,b,c);
         cout<<res;
         return 0;
    }