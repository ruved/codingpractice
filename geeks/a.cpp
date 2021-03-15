#include<bits/stdc++.h>
#define ll long long
using namespace std;
 int virusInfection(string s, int K){
        // code here
       vector<int>prev;
        for(int i=0;i<s.length();++i)
                if(s[i]=='1')
                    prev.push_back(i);
        
        int n=prev.size();
        if(n==0) return 0;
        int ans=0;
        ans=(prev[0]-K<0)?prev[0]+1:K+1;
       // cout<<ans<<" ";
        for(int j=1;j<n;++j)
        {
            ans+=((prev[j]-prev[j-1])<2*K)?prev[j]-prev[j-1]:2*K+1;
            //cout<<ans<<" ";
        }
        ans+=(prev[n-1]+K>=s.length())?s.length()-prev[n-1]-1:K; 
        return ans;
    }

 int main()
 {
string s;
 cin>>s;
  int k;
   cin>>k;
   cout<<virusInfection(s,k);
  return 0;
 }