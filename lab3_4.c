#include<stdio.h>
int main()
{
    long long n,i;
    int p;
    scanf("%lld",&n);
    for(n;n>=0;n--)
    {
        p=1;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            printf("%lld",n);
            break;
        }

    }
}
