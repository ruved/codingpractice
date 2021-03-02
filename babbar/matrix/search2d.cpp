#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 bool searchMatrix(vector<vector<int> >& matrix, int target) {
        int i=0;
        for( i=0;i<matrix.size();++i)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][matrix[i].size()-1])
                break;
        }
        if(i==matrix.size())
            return false;
        for(int j=0;j<matrix[i].size();++j)
            if(target==matrix[i][j])
                return true;
        return false;
    }
 int main()
 {
      int r,c;
       cin>>r>>c;
        vector<vector<int> >matrix(r,vector<int>(c));
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                cin>>matrix[i][j];
                int target;
                cin>>target;
               cout<<searchMatrix(matrix,target)<<endl; 
  return 0;
 }