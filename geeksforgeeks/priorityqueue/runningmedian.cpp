#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
priority_queue<int> maxpri;
priority_queue<int,vector<int>,greater<int> > minpri; 
/*greater<int> is comparator function we can make customiaze comparator using comparator class*/
 float median=0.0;

 cin>>n;
 int a[n];
 for(int i=0;i<n;++i)
    cin>>a[i];

 for(int i=0;i<n;++i)
 {
     if(maxpri.size()>=minpri.size())
     maxpri.push(a[i]);
     else
     minpri.push(a[i]);
     if(maxpri.size()>minpri.size()+1)
     {
         minpri.push(maxpri.top());
         maxpri.pop();
     }
     else
     if(minpri.size()>maxpri.size()+1)
        {
        maxpri.push(minpri.top());
        minpri.pop();
        }

    if(maxpri.size()==minpri.size())
    median=(maxpri.top()+minpri.top())/2.0;
    else if(maxpri.size()>minpri.size())
    median=maxpri.top();
    else
    median=minpri.top();
    cout<<median<<" ";

 }
return 0;
}