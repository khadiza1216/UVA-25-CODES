#include<stdio.h>
#include<math.h>
int main()
{
    long long int m,n,x;
    while(1){
        scanf("%lld",&n);
        if(n==0){
            break;
        }
        x=sqrt(n);
         m=x*x;
        if(m==n){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
