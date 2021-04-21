#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int mat[5][5];
     for(int i=0;i<5;++i)
     for(int j=0;j<5;++j)
     cin>>mat[i][j];

     //search one in matrix
    int x,y;
    for(int i=0;i<5;++i)
    for(int j=0;j<5;++j)
    if(mat[i][j]==1)
    {x=i;y=j;break;}

    cout<<abs(2-x)+abs(2-y);
      
  return 0;
 }