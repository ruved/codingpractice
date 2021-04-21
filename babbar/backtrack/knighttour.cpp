#include<bits/stdc++.h>
#define ll long long
using namespace std;
 void knighttour(vector<vector<int> >mat,int i,int j,vector<vector<bool>>&vis)
 {
     
 }
 int main()
 {
     int n;
     cin>>n;
     vector<vector<int> >mat(n,vector<int>(n));
     vector<vector<bool> >vis(n,vector<bool>(n));
     for(int i=0;i<n;++i)
     for(int j=0;j<n;++j)
     knighttour(mat,i,j,vis);
  return 0;
 }