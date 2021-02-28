#include<bits/stdc++.h>
#define m 100000
using namespace std;
 int main()
 {
 int n,q;
  cin>>n>>q;
   bool a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];
    string s="";
    for(int i=0;i<n;++i)
    	{
    	if(a[i]==1) s+="1";
    	else s+="0";
    	}
	//cout<<s<<" ";
 	bitset<m>b(s);
 	int x,y;
 	while(q--)
 	{
 		cin>>x>>y;
 		if(x==2)
 		{
 			if(b.count()>=y)
 			cout<<"1\n";
 			else
 			cout<<"0\n";
 		}
 		else
         { 
             if(b.test(n-y))
			 	b.set(n-y,0);
			 else
				b.set(n-y,1);
         }
		
 	}
 return 0;
 }