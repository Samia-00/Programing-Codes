#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    char c;
    int i,j,n=1,m=10;
    scanf("%s",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%1f",&N[i][j]);
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=n+i;j<11-i;j++)
        {
            sum=sum+N[i][j];
        }
        //n++;
        //m--;
    }
    if(c=='S')
    {
        printf("%.11f\n",sum);
    }
    else if (c=='M')
    {
        printf("%.11f\n",sum/30.0);
    }
    return 0;
}
