#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	 while(t--)
	 {
	     int n,k,d;
	      cin>>n>>k>>d;
	      int sum=0;
	      int a[n];
	      for(int i=0;i<n;++i)
	      {
	          cin>>a[i];
	          sum+=a[i];
	      }
	      cout<<sum/k<<endl;
	      
	 }
	return 0;
}
