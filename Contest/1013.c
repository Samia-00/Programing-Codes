
#include<stdio.h>
int main()
{
    int a,b,c,largest;
    scanf("%d %d %d",&a,&b,&c);
    largest=((a>b && a>c)?a : (b>c)?b:c);
    printf("%d eh o maior\n",largest);
    return 0;
}
