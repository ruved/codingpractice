/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
bool findprime(int n)
{
    if(n<=1) return false; 
	for(int i=2;i*i<=n;++i)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
// Write your code here
 int main()
 {
	 int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	int i=-1,j=n;
	bool p1=false,p2=false;
	while(i<=j)
	{
		if(!p1)
		 { i++; p1=findprime(a[i]);}
		if(!p2)
		{j--; p2=findprime(a[j]);}
		if(p1&&p2)
		{
            cout<<a[j]<<" "<<a[i]<<" ";
			cout<<a[j]-a[i]<<"\n";
            break;
		}
	}
	if((p1&&p2)==false)
	cout<<"1\n";


	  return 0;
 }