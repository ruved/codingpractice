#include<bits/stdc++.h>
using namespace std;
 int main()
 {
   string x,y,z;
   cin>>x>>y;
   
   if(x.length()!=y.length())
   cout<<"-1\n";
   else
   {
       bool b=0;
       for(int i=0;i<x.length();++i)
        {
            if(x[i]>=y[i])
            z+=y[i];
            else
            {
                b=1;
                break;
            }
        }
        if(b==1)
        cout<<"-1\n";
        else
        cout<<z<<endl;
   }
   return 0;
 }