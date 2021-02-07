#include<bits/stdc++.h>
using namespace std;
string conv24(string s)
{
    int n=s.length();
    bool am=s[n-2]=='A'?true:false;
    int hour=atoi(s.substr(0,2).c_str());
    if(hour==12&&am)
        hour-=12;
    else
    if(hour>=1&&hour<=11&&!am)
        hour+=12;
    
    string sh=to_string(hour);
    if(sh.length()==1)
    sh="0"+sh;
    return sh+s.substr(2,3);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	cin>>ws;
	while(t--)
	{
	    string p;
	    getline(cin,p);
	    p=conv24(p);
	    int n;
	    cin>>n;
	    cin>>ws;
	    string l,r;
	    string res;
	    for(int i=0;i<n;++i)
	    {
	        string temp;
	        getline(cin,temp);
	        l=temp.substr(0,8);
	        r=temp.substr(9,8);
	       // cout<<l<<" "<<r<<endl;
	        //convert into 24hour clock
	        l=conv24(l);
	        r=conv24(r);
	        if((p.compare(l)>=0)&&(p.compare(r)<=0))
	        res+="1";
	        else
	        res+="0";
	    }
	    cout<<res<<endl;
	    
	}
    
	return 0;
}
