#include<bits/stdc++.h>
#define ll long long int
using namespace std;

double diff(double n,double mid) 
{ 
    if (n > (mid*mid*mid)) 
        return (n-(mid*mid*mid)); 
    else
        return ((mid*mid*mid) - n); 
} 
bool find(ll a,ll b,ll x)
{
    if(a>b) return false;
    ll c=a*a*a;
    ll d=b*b*b;
    if((c+d)==x)
    return true;
    else 
    if(c+d>x)
    return find(a,b-1,x);
    else 
     return  find(a+1,b,x);
}
double cubicRoot(double n) 
{ 
    double start = 0, end = n; 
    double e = 0.1; 
  
    while (true) 
    { 
        double mid = (start + end)/2; 
        double error = diff(n, mid); 

        if (error <= e) 
            return mid; 
        if ((mid*mid*mid) > n) 
            end = mid; 
        else
            start = mid; 
    } 
} 
 int main()
 {
     ll t;
     cin>>t;
     while(t--)
     {
          ll n;
           cin>>n;
           ll b=(ll)cubicRoot((double)n);
          // cout<<b<<' ';
           ll a=1;
           if(find(a,b,n))
           cout<<"Yes\n";
           else
               cout<<"No\n";
           

     }
     return 0;
 }