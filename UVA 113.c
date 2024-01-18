#include<stdio.h>

int main()
{
    double k,n;
    while(scanf("%lf%lf",&n,&k)!=EOF)
    {
        printf("%.0lf\n",pow(k,1/n));
    }
    return 0;
}
