#include<bits/stdc++.h>
#define ll long long
using namespace std;
 // Count Squares 
 //https://practice.geeksforgeeks.org/problems/count-squares3649/1 
  int countSquares(int N) {
        // code here
        double l=0,h=N/2,mid;
        while(h-l>=0.0001)
        {
             mid=(h+l)/2;
             if(mid*mid<N)
             l=mid;
             else
             h=mid;
        }
        return (int)l;
    }
 int main()
 {
     int n;
      cin>>n;
      int x=countSquares(n);
      cout<<x;
  return 0;
 }