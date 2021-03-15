#include<bits/stdc++.h>
#define ll long long
using namespace std;
//learrange array in alternating positive & negative items with O(1) extra space 
void sortarray(int a[],int n)
{
    int i=0,j=0;
     // 1 count the negative and psoitive numbers in the array
    int neg=0,pos=0;
    for(int i=0;i<n;++i)
        if(a[i]<0)
        neg++;
        else
        pos++;
    
    // 2 sort the array in increasing order
        sort(a,a+n);
    //3 swap the one negative and one positive element
        
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
        
                sortarray(a,n);
      }
  return 0;
 }