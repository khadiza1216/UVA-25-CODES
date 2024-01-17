#include<stdio.h>
int main()
{

    int i,j=0,max,min,a,b,n,sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d\n%d",&a,&b);
        for(i=a;i<=b;i++){
            if(i%2==1){
               sum=sum+i;
            }
        }
        j++;
        printf("Case %d: %d\n",j,sum);
        sum=0;
    }
    return 0;
}
