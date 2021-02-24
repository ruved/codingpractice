#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
     cin>>t;
      while(t--)
      {
          int n;
           cin>>n;
           cin>>ws;
        string s[n];
        int freq[26]={};
        for(int k=0;k<n;++k) 
        {   
             cin>>s[k];
             freq[s[k][0]-'a']++;
        }
            //store all the string into the set
        unordered_set<string> st(s,s+n);
       unordered_set<string> nothp;
        //find the unique string(after swapping the string first character newly generated strings) that are not in the input string set
        for(int k=0;k<n;++k)
        {   
            for(int l=0;l<26;++l)
            {
                string s2;
                s2=s[k];
                if(freq[l]>0)
                {  
                    s2[0]='a'+l;
                    //cout<<s1<<" "<<s2<<":";
                    if(st.find(s2)==st.end())
                    nothp.insert(s2);
                }
             }
        }

       // cout<<nothp.size()<<" ";
       //find the pairs that are swapping the first character the the resulted string will be in the input string set
        vector<string>hp(nothp.begin(),nothp.end());
        int res=0;
        for( int i=0;i<hp.size();++i)
        {    for(int j=i+1;j<hp.size();++j)
            { 
                 string s1,s2;
                    s1=hp[i];s2=hp[j];
                    char c=s1[0];
                    s1[0]=s2[0];
                    s2[0]=c;
                    if(st.find(s1)!=st.end()&&st.find(s2)!=st.end())
                    { // cout<<s1<<" "<<s2<<":";
                       res+=2;
                    }          
            }
        }
           cout<<res<<endl;
      }
     return 0;
}