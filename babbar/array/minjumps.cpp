#include<bits/stdc++.h>
using namespace std;

/*
recursion 
int minjumps(int a[],int ind,int n)
{
    if(ind>=n-1) return 0;
    if(a[ind]==0) return INT_MAX;

    int res=INT_MAX;
    for(int i=1;i<=a[ind];++i)
    res=min(res,1+minjumps(a,ind+i,n,dp));
    return res;
}*/

int minjumps(int a[],int index,int n)
{
    //tushar roy approach
    //minimum jump with path
    int jump[n+1],path[n+1];
    jump[0]=0;
    for(int i=1;i<n;++i)
    {
        jump[i]=INT_MAX;
        for(int j=0;j<i;++j)
        {
            if(i<=j+a[j]&&jump[j]!=INT_MAX)
            {
                if(jump[i]>1+jump[j])
                {
                       path[i]=j;
                       jump[i]=1+jump[j];
                }
                break;
                //jump[i]=min(jump[i],1+jump[j]);
            }
        }
    }
    int j=n-1;
    string res="";
    while(j!=0)
    {
        cout<<j<<" ";
        j=path[j];
    }
    cout<<": ";
    return jump[n-1];
}
int main()
{
    int n; cin>>n;
    int a[n];
    
    for(int i=0;i<n;++i)
        cin>>a[i];  
    cout<<minjumps(a,0,n)<<endl;
}