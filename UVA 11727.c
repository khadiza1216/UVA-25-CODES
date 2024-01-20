#include<stdio.h>
int main()
{
    int n,num1,num2,num3,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&num1,&num2,&num3);
        if((num1>num2&&num2>num3)||(num3>num2&&num2>num1)){
            printf("Case %d: %d\n",i,num2);
        }
        else if((num2>num3&&num3>num1)||(num1>num3&&num3>num2)){
            printf("Case %d: %d\n",i,num3);
        }
         else if((num3>num1&&num1>num2)||(num2>num1&&num1>num3)){
            printf("Case %d: %d\n",i,num1);
        }
    }
    return 0;
}
