#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	 cin>>a>>b;
	
	if((a-b)%10==9) 
	    cout<<a-b-1; 
    else 
        cout<<a-b+1; 
	return 0;
}
