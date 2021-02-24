#include<bits/stdc++.h>
#define ma 1000001
using namespace std;

bool isprime(int n)
{
    for(int i=2;i*i<=n;++i)
    if(n%i==0) return false;

return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p[ma];
    p[0]=0;p[1]=0;
    int count=0;
    for(int i=2;i<ma;++i)
    {
        if(isprime(i)) count++;
        p[i]=count;
    }
    int t;
     cin>>t;
     vector<int>prime;
      while(t--)
      {
           int x,y;
           cin>>x>>y;
           
           if((p[x])>y)
            cout<<"Divyam\n";
            else
                cout<<"Chef\n";
      }
    return 0;
}