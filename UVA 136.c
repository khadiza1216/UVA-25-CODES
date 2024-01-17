#include<stdio.h>
int main()
{
    printf("The 1500'th ugly number is 859963392.\n");
   return 0;
   /*calculation
calculation to find out 1500th ugly number.
#include<stdio.h>
int main()
{
    long long int n,i,count=0;

    for(i=1;;i++){
        n=i;
        while(n%2==0) n=n/2;
        while(n%3==0) n=n/3;
        while(n%5==0) n=n/5;
        if(n==1)count++;
        if(count==1500)break;
    }
   printf("%lld",i);
   return 0;
}*/

}
