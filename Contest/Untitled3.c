#include<stdio.h>
void main()
{
    char b=253;
    int a,i;
    printf("serise:");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
    {
        if (i!=a)
        {
            printf("%d%c+",i,b);
        }
        else
        {
            printf("%d%c",i,b);
        }
    }
}
