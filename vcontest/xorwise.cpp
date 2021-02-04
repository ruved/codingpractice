#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
         int a,b;
     cin>>a>>b;
     int x=a&b;
     int res=x^a;
     res+=x^b;
     cout<<res<<endl;
     }
    
    return 0;
}