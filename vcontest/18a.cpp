// A. K-Periodic Array
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// This task will exclusively concentrate only on the arrays where all elements equal 1 and/or 2.

// Array a is k-period if its length is divisible by k and there is such array b of length k, that a is represented by array b written exactly  times consecutively. In other words, array a is k-periodic, if it has period of length k.

// For example, any array is n-periodic, where n is the array length. Array [2, 1, 2, 1, 2, 1] is at the same time 2-periodic and 6-periodic and array [1, 2, 1, 1, 2, 1, 1, 2, 1] is at the same time 3-periodic and 9-periodic.

// For the given array a, consisting only of numbers one and two, find the minimum number of elements to change to make the array k-periodic. If the array already is k-periodic, then the required value equals 0.

// Input
// The first line of the input contains a pair of integers n, k (1 ≤ k ≤ n ≤ 100), where n is the length of the array and the value n is divisible by k. The second line contains the sequence of elements of the given array a1, a2, ..., an (1 ≤ ai ≤ 2), ai is the i-th element of the array.

// Output
// Print the minimum number of array elements we need to change to make the array k-periodic. If the array already is k-periodic, then print 0.

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;++i)
      cin>>a[i];
      int res=0;
      

      for(int i=0;i<k;i++)
      { 
          int occurance[3]={0};
          int j=i;
          while(j<n)
          {
             occurance[a[j]]++;
              j=j+k;
          }
          res+=min(occurance[1],occurance[2]);
      }
         
        cout<<res<<endl;

  return 0;
 }