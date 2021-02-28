#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
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
            set<int>st;
            for(int i=1;i<n;++i)
                st.insert(abs(a[i-1]-a[i]));
            cout<<st.size()<<endl;
      }
  return 0;
 }