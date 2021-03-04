#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int minJumps(int arr[], int n){
    // Your code here
    if(n<=0) return 0;
   if(arr[0]==0) return -1;
   int jump=1;
   int maxreach =arr[0];
   int step=arr[0];
    int i=1;
    for(i=1;i<n;++i)
    {
       if(i==n-1) return jump;
       maxreach=max(maxreach,i+arr[i]);
       step--;
       if(step==0)
       {
          // cout<<maxreach-i<<" ";
           jump++;
           if(i>=maxreach) return -1;
           step=maxreach-i;
       }
    }
    return -1;
}

 int main()
 {
      int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;++i)
        cin>>a[i];

        cout<<minJumps(a,n)<<endl;
  return 0;
 }