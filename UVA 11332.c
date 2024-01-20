#include<stdio.h>
int main()
{
    long long int n;
    int res;
    while(scanf("%lld",&n)!=EOF){
            if(n==0) break;
        while(n/10!=0){
                res=0;
          while(n!=0){
          res=res+n%10;
          n=n/10;
          }
          n=res;
        }
        printf("%lld\n",n);
    }
    return 0;
}
