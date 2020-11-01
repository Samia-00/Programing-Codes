#include<stdio.h>
#include<string.h>
int main()
{
      int t,n,i,j;
      int arr[2001];
      while(scanf("%d",&t)==1)
        {
            for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            arr[n]=arr[n]+1;
        }
            for(i=0;i<arr[2001];i++)
            {

            for(j=0;j<arr[i];j++)
        {
            if(arr[i] != 0)
        {
            printf("%d aparece %d vez(es)\n",i,arr[i]);
            break;
        }
        }
            }

        }
      return 0;
}
