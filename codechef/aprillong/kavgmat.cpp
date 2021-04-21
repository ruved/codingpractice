#include<bits/stdc++.h>
#define ll long long
using namespace std;
 int fun(ll **mat,ll n,ll m,ll k,ll order)
 {
    ll count=0;
    ll mini=min(n,m);
    while(order<mini+1)
    {
      ll i=order,j=m;
      while(i<n+1)
      {
        ll ans;
        ll x=i-order+1;
        ll y=j-order+1;
        ll z =mat[i][j]-mat[x-1][j]-mat[i][y-1]+mat[x-1][y-1];
        if(z/(order*order)<k)
          i++;
        else
        {
          ll st=order,end=m;
          while(st<=end)
          {
           ll mid=(st+end)/2;
            x=i-order+1;
            y=mid-order+1;
            z =mat[i][mid]-mat[x-1][mid]-mat[i][y-1]+mat[x-1][y-1];
           if(z/(order*order)<k)
            st=mid+1;
            else
            {
              ll ans=mid;
              end=mid-1;
            }
          }
          count+=m-ans+1;
          i++; 
        }
      
      }
      order+=1;
    }
    return count;
 }

 void print(ll **mat,ll n,ll m)
 {
    for(ll i=0;i<n;++i)
    {for(ll j=0;j<m;++j)
    cout<<mat[i][j]<<" ";
    cout<<endl;
    }
 }
 int main()
 {

    int t;
    cin>>t;
    while(t--)
    {
       ll n,m,k;
       cin>>n>>m>>k;
       ll a[n][m];
       for(ll i=0;i<n;++i)
       for(ll j=0;j<m;++j)
         cin>>a[i][j];
        
      ll **mat=new ll*[n];
      for(ll i=0;i<n;++i)
       mat[i]=new ll[m];

      mat[0][0]=a[0][0];
      for(ll i=1;i<m;++i)
      mat[0][i]=mat[0][i-1]+a[0][i];

      for(ll i=1;i<m;++i)
      for(ll j=1;j<m;++j)
      mat[i][j]=mat[i][j-1]+a[i][j];
       print(mat,n,m);
       ll order=1;
     int count=fun(mat,n,m,k,order);
     cout<<count<<endl;  
    }
  return 0;
 }