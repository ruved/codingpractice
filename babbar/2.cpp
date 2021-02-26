#include<bits/stdc++.h>
using namespace std;
//minimum no of comparison required to find minimum and maximum element
pair<int,int> findminmax(int a[],int left,int right)
{
    if(left==right)
    return make_pair(a[left],a[right]);
    if(right==left+1)
    {
        return make_pair(min(a[left],a[right]),max(a[left],a[right]));
    }
    else
    {
        pair<int,int>mml,mmr;
        int mid=(left+right)/2;
        mml=findminmax(a,left,mid);
        mmr=findminmax(a,mid+1,right);
        return make_pair(min(mml.first,mmr.first),max(mml.second,mmr.second));
    }
    
}
 int main()
 {
     int n;
      cin>>n;
       int a[n];
        for(int i=0;i<n;++i)
        cin>>a[i];
        pair<int,int> m;
        pair<int,int>res=findminmax(a,0,n-1);
        cout<<res.first<<" "<<res.second;
      return 0;
 }