#include<stdio.h>

int main()
{
    int ln,i,m,n=0,x=1;
    scanf("%d",&ln);
     m=ln;
    for(i=2;m>1;i++)
    {
        if(m%i==0)
        {
            if(x==i)
                break;
            m/=i;
            x=i;
            i=1;
            n++;
        }
    }
    if(n==3)
        printf("%d is a Lucky Number.",ln);
    else
        printf("%d is not a Lucky Number.",ln);
    return 0;
}
