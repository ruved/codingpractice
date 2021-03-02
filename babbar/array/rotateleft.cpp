#include<bits/stdc++.h>
#define ll long long
using namespace std;

void reverse(int a[],int st,int end)
{
    while(st<end){
        int t=a[st];
        a[st++]=a[end];
        a[end--]=t;  
    }
}
void rotateleft(int a[],int n,int d)
{
    d=d%n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
} 
void printarray(int a[],int n)
{
    for(int i=0;i<n;++i)
        cout<<a[i]<<" ";
        cout<<endl;
}
 int main()
 {

     int t;
      cin>>t;
      while(t--)
      {
          int n;
           cin>>n;
            int a[n];
             for(int i=0;i<n;++i)
             cin>>a[i];
             int d;
              cin>>d;
             rotateleft(a,n,d);
             printarray(a,n);
             
      }
  return 0;
 }