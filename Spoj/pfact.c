#include <stdio.h>
#include<math.h>
#define n 100005
long long int p[n],k=1,size;
long long int a[n];
long long int prime()
{
    long long i,j;
    a[0]=a[1]=1;
    for(i=4;i<=n;i=i+2)
        a[i]=1;

    for(i=3;i<=sqrt(n);i=i+2)
        for(j=i*i;j<=n;j=j+2*i)
            a[j]=1;

    p[0]=2;
    for(i=3;i<=n;i=i+2)
    {
        if(a[i]==0)
        {
            p[k]=i;
            //cout<<p[k]<<endl;
            k++;
        }
    }
}

int main()
{

    long long int u,w,z,y,cnt;
    //freopen("factor.txt","w",stdout);
    prime();

    for(u=2;u<=100000;u++)
    {
        y=u;
        printf("%llu:",u);
        for(w=0;w<=k && p[w]<=sqrt(u);w++)
        {
            if(y%p[w]==0)
            {
              while(y%p[w]==0)
              {
                   y=y/p[w];
                   z=p[w];
              }
               printf(" %lld",p[w]);
            }

            if(y==1)
                break;
        }
        if(y>1)
            printf(" %lld",y);
        
        printf("\n");
    }
    return 0;
}
