
#include<stdio.h>
int main()
{

    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(abs(a-c)==2 || abs(b-d)==2)
    {
        printf("1");
    }
    else if(a==c && b!=d)
    {
        printf("1");
    }
    else if (a!=c && b==d)
    {
        printf("1");
    }
if(a==c && b==d)
    {
        printf("0");
    }
    else {printf("2");}

    return 0;

}
