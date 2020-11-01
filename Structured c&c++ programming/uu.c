#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,t,n,arr[2001];
    memset(arr,0,sizeof(arr));
    scanf("%d",&t);

        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            arr[n]=arr[n]+1;
        }
        for(i=0; i<2001; i++)
        {

                if(arr[i]>0)
                {
                    printf("%d aparece %d vez(es)\n",i,arr[i]);
                }


        }


    return 0;
}
