#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
     int b,g;
      cin>>b>>g;
     //cout<<1+b-1+g-1<<endl;
     int i=1,j;
    for( j=1;j<=g;++j)
    
        cout<<i<<" "<<j<<endl;
    for(j=2;j<=b;++j)
        cout<<j<<" "<<g<<endl;
     return 0;
 }
