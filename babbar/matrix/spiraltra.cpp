#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
vector<int> spiralTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int i=0,k=0,l=0;
        //l start colum index
        //k start row index
        vector<int>res;
        while(k<r&&l<c)
        {
            //upper row
            for(i=l;i<c;i++)
            res.push_back(matrix[k][i]);
            k++;

            //right colum
            for(i=k;i<r;++i)
            res.push_back(matrix[i][c-1]);
            c--;
        
        if(k<r)
           { //bottom row
            for(i=c-1;i>=l;--i)
            res.push_back(matrix[r-1][i]);
            r--;
            }
            //left column
            if(l<c)
            {
                for(i=r-1;i>=k;--i)
            res.push_back(matrix[i][l]);
            l++;
            }
            
        }
        return res;
    }
 
 int main()
 {
     int t;
      cin>>t;
       while(t--)
       {
           int r,c;
           cin>>r>>c;
           vector<vector<int> >matrix(r,vector<int>(c));
           for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
            vector<int>res=spiralTraverse(matrix,r,c);
                for(int x=0;x<res.size();++x)
                    cout<<res[x]<<" ";
                    cout<<endl;
        }
  return 0;
 }