#include <bits/stdc++.h>
#define ma 1000000
using namespace std;
//find the primes  1 to N store it into an vector array
vector<int> primes(int n)
{
    /*vector<bool>p(n+1,true);
    p[1]=false;p[0]=false;
    for(int i=2;i*i<=n;++i)
    {
        if(p[i])
        {
            for(int j=i*i;j<=n;j+=i)
                p[j]=false;
        }
    }
    
    vector<int>res;
    for(int i=2;i<=n;++i)
        if(p[i])
                res.push_back(i);return res;
    */
    int lp[n+1]={0};
vector<int> pr;

for (int i=2; i<=n; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=n; ++j)
        lp[i * pr[j]] = pr[j];
    }
    
    return pr;
    
}
int main() {
	// your code goes here
	int t;
	 cin>>t;
	 vector<int> p=primes(ma+1);
	 while(t--)
	 {
	     int n;
	     cin>>n;
	     cout<<p.size()<<" ";
	     set<int> st;
	     int l=0;
	    //made a map of primes
	     for(int i=0;p[i]<=n;++i)
	      {
	          st.insert(p[i]);
	          l++;
	      }
	        
	   int ans=0;    
	   //traverse all the distinct triplet      
	   for(int i=0;i<l;++i)
	    for(int j=i+1;j<l&&((p[i]+p[j])<=p[l]);++j)
	        if(st.find(p[i]+p[j])!=st.end())
	        ans++;
	   
	   cout<<ans<<endl;     
	 }
	return 0;
}
