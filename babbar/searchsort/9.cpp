#include<bits/stdc++.h>
#define ll long long
using namespace std;
 //https://www.geeksforgeeks.org/searching-array-adjacent-differ-k/

int search(int arr[],int n,int k,int key)
{
     int i = 0;
    while (i < n)
    {
        // If x is found at index i
        if (arr[i] == key)
            return i;
 
        // Jump the difference between current array element and x divided by k
        // We use max here to make sure that i moves at-least one step ahead.
        i = i + max(1, abs(arr[i]-key)/k);
    }
 
   // cout << "number is not present!";
    return -1;
}
 int main()
 {
     int n,k,key;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;++i)
      cin>>a[i];
      cin>>key;
      int index=search(a,n,k,key);
    cout<<index;
  return 0;
 }