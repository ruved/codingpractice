#include<bits/stdc++.h>
#define ll long long
using namespace std;
void rotate90(vector<vector<int> >matrix)
{
    //rotate the elements

}
/*
 void rotate90(vector<vector<int> >matrix)
 {
     //print 90degree
     int m=matrix.size();
     int n=matrix[0].size();
     for(int j=0;j<n;++j)
       { for(int i=m-1;i>=0;--i)
            cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
 }*/
 int main()
 {
     int m,n;
      cin>>m>>n;
      vector<vector<int> > a(m,vector<int>(n));
       for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            cin>>a[i][j];

        rotate90(a);

  return 0;
 }