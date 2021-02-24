#include<bits/stdc++.h>
using namespace std;
void printNcR(int n, int r)
{

    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
//on each term calucaluation we minmize the output by taking gcd 
//and then divide the numerator and denominator by gcd
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    // if our approach is correct p = ans and k =1
    cout << p << endl;
}
int main()
{
    int t;
     cin>>t;
      while(t--)
      {
          int n,r;
          cin>>n>>r;
           long long int res = 1,i;
          printNcR(n-1,r-1);
          //cout<<res<<endl;
      }

    return 0;
}