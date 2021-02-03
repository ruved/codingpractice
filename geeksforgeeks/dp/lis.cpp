// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(int, int[]);

int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];

        //calling method longestSubsequence()
        cout << longestSubsequence(n, a) << endl;
    }
}
// } Driver Code Ends


// return length of longest strictly increasing subsequence
int lis(int a[],int n,int *ma)
{
    if(n==1)
    return 1;
    int res,maxend=1;
    for(int i=1;i<n;++i)
    {
        res=lis(a,i,ma);
        if(a[i-1]<a[n-1]&&(res+1)>maxend)
            maxend=res+1;
        
    }
    if(*ma<maxend)
    *ma=maxend;
    return maxend;
}

int longestSubsequence(int n, int a[])
{
   // your code here
   int ma=1;
   lis(a,n,&ma);
   return ma;
}
