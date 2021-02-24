#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	  while(t--)
	{
	    int n;
	    cin>>n;
	   int i=5;
	   int ans=0;
	   while(i<=n)
	   {
	       ans+=n/i;
	       i=i*5;
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
