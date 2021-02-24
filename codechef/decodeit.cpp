#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
	  while(t--)
	  {
	      string s;
	      int n;
	      cin>>n;
	      cin>>s;
	      string ans="";
	      for(int i=0;i<n;i+=4)
	      {
	          int temp=(s[i]-48)*8+(s[i+1]-48)*4+(s[i+2]-48)*2+(s[i+3]-48)*1;
	          ans+=c[temp];
	      }
	      cout<<ans<<endl;
	  }
	return 0;
}
