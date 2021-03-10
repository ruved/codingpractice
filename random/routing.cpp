#include<bits/stdc++.h>
using namespace std;

string changeiptobinary(string s)
{
    int res=0;
    int i;
    string subres="";
    for(i=0;i<(int)s.length();++i)
    {
        if(s[i]=='.')
        {
            while(res)
            {
                subres=char(res%2)+subres;
                res/=2;
            }
        }
        else
        res=res*10+(s[i]-'0');
    }
    while(res)
    {
        subres=char(res%2)+subres;
        res/=2;
    }
    return subres;
}
void subtobinary(string s[],int n,string subip[],int mask[])
{
    int res=0;
    int i,j;
    for(j=0;j<n;++j)
    {
        string subres="";
        for(i=0;i<s[j].length();++i)
    {
        if(s[j][i]=='.'||s[j][i]=='/')
        {
            while(res)
            {
                subres=char(res%2)+subres;
                res/=2;
            }
            if(s[j][i]=='/') break;
        }
        else
        res=res*10+(s[j][i]-'0');
    }
    if(s[j][i]=='/')
    {
        res=0;
        while(s[j][i]!='\0')
        {
            res=res*10+(s[j][i]-'0');
            i++;
        }
        mask[j]=res;
    }
    while(subres.length()<mask[j])
        subres+="0";
    subip[j]=subres;
    }
    
}

struct Trie{
    Trie *child[2];
    bool isend;
};
Trie* getNode()
{   
    Trie *p=new Trie;
    p->isend=false;
        p->child[0]=NULL;
        p->child[1]=NULL;
    return p;
}
void insertTrie(Trie *root,string s)
{
    Trie *pcrawl=root;
    for(int i=0;i<s.length();++i)
    {
        int ind=s[i];
        if(!pcrawl->child[ind])
            pcrawl->child[ind]=getNode();
        
        pcrawl=pcrawl->child[ind];
    }
    pcrawl->isend=true;
}
string search(Trie* root,string s)
{
    Trie *pcrawl=root;
    string res="",temp="";
    for(int i=0;i<s.length();++i)
    {
        if(pcrawl->child[s[i]])
        {
            temp+=s[i];
            if(pcrawl->isend)
            res=temp;
            pcrawl=pcrawl->child[s[i]];
        }
    }
    return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string subnets[n],ip,subip[n];
    int subnetid[n],mask[n];
    for(int i=0;i<n;++i)
        cin>>subnets[i]>>subnetid[i];
    
    cin>>ip;    
    subtobinary(subnets,n,subip,mask);
    ip=changeiptobinary(ip);
    Trie *root=getNode();
    
    for(int i=0;i<n;++i)
        insertTrie(root,subip[i]);
    //search the longest prefix match
    map<string,int>mp;
    for(int i=0;i<n;++i)
    mp[subip[i]]=subnetid[i];
    string res=search(root,ip);
    if(res=="")
    cout<<0;
    else
    cout<<mp[res];    
    
    
    return 0;
}