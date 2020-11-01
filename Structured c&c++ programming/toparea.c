
#include <stdio.h>
int main()
{
    double sum=0.0, M[12][12];
    char T[2];
    int i,j,k,l,p=10,q=1;
    scanf("%s", &T);
    for(i=0;i<=11;i++)
    {
        for(j=0; j<=11; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for(k=0; k<=4;k++)
    {
        for(l=1+i; l<11-i;l++)
        {
            sum+=M[k][l];
        }

            //p--;
            //q++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",sum);
    else if(T[0]=='M')
    {
        sum=sum/30.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}
