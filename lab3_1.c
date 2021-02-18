#include<stdio.h>
int main()
{
    int x,i,j,n,max=0,y=0;
    for(i=0;i<5;i++)
    {
        x=0;
        for(j=0;j<4;j++)
        {
            scanf("%d" ,&n);
            x+=n;
        }
        if(x>max)
        {
            max=x;
            y=i+1;
        }
    }
    printf("%d %d\n" ,y,max);

    return 0;
}
