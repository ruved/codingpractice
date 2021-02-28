#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 while(t--)
	 {
	     int l,r;
	     cin>>l>>r;
	     int d=(r-l+1)+1;
	     int rem=l%d;
	     cout<<rem+d<<endl;
	 }
	 
	return 0;
}
