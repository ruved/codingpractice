#include<bits/stdc++.h>
#define ll long long
using namespace std;
int factor(int n)
{
int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, count only one 
            if (n / i == i) 
                cnt++; 
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
}
 
 int findlarge(int num)
 {
     while(factor(num)%2==0)
     {
         num--;
     }
     return num;
 }
 int main()
 {
     int t;
      cin>>t;
      int minnum=1,m=1000000;
        int maxnum=findlarge(m); 
       while(t--)
       {
           int secret=1;
           int q,count=0;
           while(cin>>q&&count<2000)
           {
               if(q<1||q>m||count>=2000)
               {
                   cout<<"-1\n";
                    break;
               }
                if(q==secret)
                {cout<<"1\n";break;}
                else
                cout<<"0\n";
            count++;
           }

       }
  return 0;
 }