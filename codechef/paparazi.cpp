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
            vector<pair<int,int> >va(n),st;
            int temp;
            for(int i=0;i<n;++i)
            {    cin>>temp;
                va[i]=make_pair(i+1,temp);
            }
            if(n==2)
            {
                cout<<"1\n";
                continue;
            }
            
            st.push_back(va[0]);
            st.push_back(va[1]);
            int ans=1,bf=st.size();
            for(int i=2;i<n;++i)
            {
                while(st.size()>=2)
                {
                    double s1=(double)(st[bf-1].second-st[bf-2].second)/(double)(st[bf-1].first-st[bf-2].first);
                    double s2=(double)(va[i].second-st[bf-1].second)/(double)(va[i].first-st[bf-1].first);
                    if(s1<=s2)
                    {
                        st.pop_back();
                        bf--;
                    }
                    else break;
                }
                st.push_back(va[i]); bf++;
                ans=max(ans,(st[bf-1].first-st[bf-2].first));
            }
            cout<<ans<<endl;
      }
   return 0;
}