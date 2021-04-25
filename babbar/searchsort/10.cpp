#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
//https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1#

bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int i = 0, j = 1;
    while(i<size &&j<size)
    {
        if(i!=j&&arr[j]-arr[i]==n)
            return true;
        else if(arr[j]-arr[i] <= n)
            j++;
        else 
        i++;
    }
    return false;
}

 int main()
 {
     int n,diff;
     cin>>n>>diff;
     int a[n];
     for(int i=0;i<n;++i)
        cin>>a[i];
     if(findPair(a,n,diff))
     cout<<"Yes";
     else
     cout<<"No";
        
  return 0;
 }