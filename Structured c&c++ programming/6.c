#include<stdio.h>
int main()
{
    int i,t,num,sum=0,n1,n2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {


        scanf("%d",&num);
        n2 = num%10;
        n1=num;
        while(num>=10)
        {
            num=num/10;
        }
        n1=num;
        sum=n1+n2;
        printf("sum = %d\n",sum);
    }

    return 0;
}
