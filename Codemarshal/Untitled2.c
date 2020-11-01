#include<stdio.h>
int main()
{
    char str[1000];
    int i,j,T;
    scanf("%d",&T);
    for(j=1;j<=T;j++)
    {
        gets(str);
        for(i=0;str[i];i++)
        {
            if(str[i]>='a'&& str[i]<='z')
            str[i]=str[i]-32;
        }
        scanf("%d",&j);

        printf("case %d: %s\n",str);
    }
    return 0;
}
