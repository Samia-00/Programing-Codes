#include<stdio.h>
int main()
{
    int a,sum,T,n,i;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%d ",&n);
        sum=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d",sum);
    }
}
