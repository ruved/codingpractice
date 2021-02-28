#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int l,int r,int key)
{
    if(l==r) return l;
    if(l<r)
    {
        int mid=(r+l)/2;
        if(a[mid]<key)
        return binary(a,mid+1,r,key);
        else
        return binary(a,l,mid-1,key);
    }
}
int main()
{
    int n;
     cin>>n;
     int a[n];
      for(int i=0;i<n;++i)
      cin>>a[i];
      sort(a,a+n);
      int q;
       cin>>q;
        while(q--)
        {
            int key;
             cin>>key;
            int pos=binary(a,0,n-1,key);
           cout<<pos+1<<"i"<<endl;
        }
     return 0;
}