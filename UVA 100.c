#include<stdio.h>
int main()
{
    int a,b,n,i,length,r;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%d %d ",a,b);
        if(a>b)
        {
            r=b;
            b=a;
            a=r;
        }
        length=0;
        while(a<=b)
        {
            i=1;
            n=a;
            while(n!=1)
            {
               if(n%2==0)
               {
                   n=n/2;
               }
               else if(n%2!=0)
               {
                   n=(3*n)+1;
               }
               i++;
            }
            if(i>length)
            {
                length=i;
            }
            a++;
        }
        printf("%d\n",length);
    }
    return 0;
}
