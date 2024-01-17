#include<stdio.h>
int main()
{
long long int h,o;
while (scanf("%lld %lld",&h,&o)!=EOF)
{
if (h<o)
{
    printf("%lld\n",o-h);
}
else {
    printf("%lld\n",h-o);
}
}
return 0;
}
