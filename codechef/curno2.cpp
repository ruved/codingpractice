#include <bits/stdc++.h>
#define mod 1000000007
#define llu long long unsigned
long long unsigned gcd(llu a,llu b)
{
     if(b==0)
     return a;
     else
     return gcd(b,a%b);
}
using namespace std;
llu ncr(int n,int r){
    llu p=1,q=1; 
    if(r>n/2)
        n=n-r
    while(r)
    {
        p*=n;
        q*=r;
        llu g=gcd(p,q);
        p/=g;
        q/=g;
        n--;
        r--;
    }
    return p;
}
int main() {
	// your code goes here
	int t; cin>>t;
	 while(t--)
	 {
	     int n,m,k;
	      cin>>n>>m>>k;
	     int p,temp;
	     cin>>p;
	      set<int> s;
	    for(int i=0;i<p;++i)
	        {cin>>temp;s.insert(temp);}
	       
	    int g=0;
	    llu res=0; 
	    
	    if(k-g>n)
	       g=k-n;
	       
	     for(int j=g;j<=k;++j)
	     {
	         if(s.find(j)==s.end())
	         {
	            res= (res+(ncr(m,j)%mod*ncr(n,k-j)%mod)%mod)%mod;
	            
	         }
	     }
	     cout<<res<<endl;
	 }
	return 0;
}
