#include<bits/stdc++.h>
#define ll long long
using namespace std;
//using quicksort to find the kth min and kth max in linear time complexity
//using random pivot in partition
void swap(int &a,int &b)
{
    int t=a;
    a=b;b=t;
}
int partition(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l;
    for(int j=l;j<r;++j)
    {
        if(a[j]<=pivot)//for kthmax just change <= to >
        {
            swap(a[i],a[j]);
            ++i;
        }
    }
    swap(a[i],a[r]);
    return i;
}
int  randompartiton(int a[],int l,int r)
{
    int pivot=rand()%r;
    swap(a[(l+pivot)%r],a[r]);
    return partition(a,l,r);
}
int kthmin(int a[],int l,int r,int k)
{
    if(k>0&&k<=r-l+1)
    {
        int pos=partition(a,l,r);
        if(pos-1==k-1) return a[pos];
        if(pos-1>k-1)
        return kthmin(a,l,pos-1,k);
        else 
        return kthmin(a,pos+1,r,k-(pos-l+1));
    }
    return INT_MAX;
}

 int main()
 {
     int t;
      cin>>t;
      while(t--)
      {
          int n;
           cin>>n;
           int a[n];
            for(int i=0;i<n;++i)
                cin>>a[i];
                int k;
                 cin>>k;
        cout<<kthmin(a,0,n-1,k)<<endl;

      }
  return 0;
 }