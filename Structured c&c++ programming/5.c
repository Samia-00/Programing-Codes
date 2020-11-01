#include<stdio.h>
int main()
{
    int i,j,n,t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("\n");

            for(j=1;j<=n;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
