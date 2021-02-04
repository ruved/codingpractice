#include<bits/stdc++.h>
#define ma 100000
using namespace std;

 int main()
 {
     int t;
      cin>>t;
       while(t--)
       {
           int n;
            cin>>n;
             string s;
              cin>>s;
              bitset<ma> bitm(s);
             int lef= bitm.count();
             int rig=n-lef;
             
             bool lb=false;
             if(lef<rig)
                lb=true;
            lef=abs(lef-rig)%4;
            if(lef%2&&lb)
            lef=4-lef;
            switch(lef)
            {
                case 0:
                 cout<<"E\n";break;
                case 1:
                cout<<"N\n";break;
                case 2:
                cout<<"W\n";break;
                case 3:
                cout<<"S\n";break;
            }
             
       }
      return 0;
 }
