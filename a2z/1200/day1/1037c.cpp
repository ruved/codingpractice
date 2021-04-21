#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 int main()
 {

     int n;
     cin>>n;
      string a,b;
      cin>>a>>b;
  
    int ans=0,i=0;

    while(i<n)
    {
        if(a[i]==b[i]) i++;
        else {
            if(i+1<n&&a[i+1]!=b[i+1]&&a[i]!=a[i+1])
            i+=2;
            else
            i++;
            
        ans++;
        }
    }
    cout<<ans;

  return 0;
 }
   //   recursion (a,b,i)
    // if(a[i]==b[i]) recursion(a,b,i+1);
    //  else if(a[i]!=b[i])
    //   {
    //       option a flip the bit
    //a[i+1]!=b[i+1]&&a[i+1]!=a[i]
    //       option b swap with any  bit its better with flip inly when two bits are opposite and consective like 
    // a =1011 b=0111 
    //   }