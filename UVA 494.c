#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,words=0;
    char stg[100000];
    while(fgets(stg,sizeof stg,stdin))
    {
        for(i=0; stg[i]!='\0'; i++)
        {
            if((stg[i]>='a' && stg[i]<='z') || (stg[i]>='A' && stg[i]<='Z'))
            {
                n=1;
            }
            else
            {
                if(n)
                {
                    words++;
                    n=0;
                }
            }
        }
        printf("%d\n",words);
        words=0;
    }

    return 0;
}
