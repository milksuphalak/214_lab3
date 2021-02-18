#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==1)
        printf("1\n");
    for(i=2;n>1;i++)
    {
        if(n%i==0)
        {
            n/=i;
            printf("%d\n",i);
            i=1;
        }
    }
    printf("0");
    return 0;
}
