#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here'
	int t;
	 cin>>t;
	  while(t--)
	  {
	      int n;
	    cin>>n;
	    int a[n];
	     
	     for(int i=0;i<n;++i)
	     cin>>a[i];
	     sort(a,a+n);
	     int mi=INT_MAX;
	     for(int i=1;i<n;++i)
	     {
	         mi=min(mi,abs(a[i]-a[i-1]));
	     }
	     
	     cout<<mi<<endl;
	  }
	
	 
	return 0;
}
