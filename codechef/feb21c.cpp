#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	  while(t--)
	  {
	       int n;
	        cin>>n;
	        long int a[n];
	         for(int i=0;i<n;++i)
	            cin>>a[i];
	            //sort the array
	       sort(a,a+n);
	       //choose first and last element as x and z  
	       //bcz maxdiffenece always between minimum element and maximum element
	      long int x=a[0];
	       long int z=a[n-1];
	       long int ma=INT_MIN;
	       //choose the y in between a[1] to a[n-2] 
	       for(int i=1;i<n-1;++i)
	       {
	           ma=max(ma,abs(x-z)+abs(x-a[i])+abs(z-a[i]));
	       }
	       cout<<ma<<endl;
	  }
	return 0;
}
