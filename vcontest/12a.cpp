#include<bits/stdc++.h>
using namespace std;
int findlog(int n)
{
      int i=0;
      while(pow(2,i)<=n)
      {
           i++;
      }
return pow(2,i-1);
}
 int main()
 {   
      int n,b,p;
      cin>>n>>b>>p;
      int resb,resp,k;
      resp=n*p;
      int mat=0;
      while(n>1)
      {
           k=findlog(n);
            //cout<<n<<" "<<k<<":";
          n=k/2+(n-k);
         
          mat+=k/2;
      }
      cout<<(2*b+1)*mat<<" "<<resp;
      return 0;
 }