#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int main()
 {
     int t;
     cin>>t;
      while(t--)
      {
           int n,m,k;
            cin>>n>>m>>k;
            int mat[n][m];
             for(int i=1;i<=n;++i)
                for(int j=1;j<=m;++j)
                    mat[i-1][j-1]=k+i+j;
            //findxor all elements
            int result=mat[0][0];
            if(n==1)
                for(int i=1;i<m;++i)
                result=result^mat[n-1][i];
            else if(m==1)
                for(int i=1;i<n;++i)
                result=result^mat[i][m-1];
            else
            result=result^mat[n-1][m-1];
            
            cout<<result<<endl;
      }
  return 0;
 }