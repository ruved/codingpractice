#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {

    int n=5;
    int mat[n][n];
    for(int i=0;i<n;++i)
     for(int j=0;j<n;++j)
      cin>>mat[i][j];
      int x,y;
    for(int i=0;i<n;++i)
    for(int j=0;j<n;++j)
     if(mat[i][j]==1)
     {
         x=i;
         y=j;
     }
    cout<<abs(n/2-x)+abs(n/2-y);



  return 0;
 }