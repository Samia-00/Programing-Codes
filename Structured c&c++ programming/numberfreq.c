#include<stdio.h>
int main()
{
    int t,j,i,n,arr[2002];
    while(scanf("%d",&t)==1)
    {


    for(i=0;i<=t;i++)
    {
        scanf("%d",&n);
        arr[n]=arr[n]+1;
    }
    //for(i=0;i<arr[n];i++)
    for (j=0;j<arr[i];j++)
    {
        if(arr[i] !=0 )
        {
            printf("%d aparece %d vez(es)\n",i,arr[i]);
        }
    }
    }
    return 0;
}
