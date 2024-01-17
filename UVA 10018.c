#include<stdio.h>
int main()

{
long long int num,n,count=0,rev=0,tem,r;
scanf("%lld",&n);

while(n--)
{
 count=0;
 scanf("%lld",&num);
while(1)
{
    tem=num;
    rev=0;
    while(num!=0)
    {
    r=num%10;
    rev=rev*10+r;
    num=num/10;
    }
    if(rev==tem)
    {
        break;
    }
    else {
        num=rev+tem;
        count++;

    }
}
 printf("%lld %lld\n",count,rev);

}

}
