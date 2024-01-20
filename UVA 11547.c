#include<stdio.h>
int main()
{
    int t,n,i,sum,rem;
    scanf("%d",&t);
    while(t--){
       sum=0;
       rem=0;
       scanf("%d",&n);
       sum=(n*63+7492)*5-498;
       if(sum<0){
        sum=sum*-1;
       }
       rem=sum/10;
       printf("%d\n",rem%10);
    }
    return 0;
}
