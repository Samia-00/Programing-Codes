#include<stdio.h>
int main()
{
    int w,h,m,s,t;
    scanf("%d",&w);
    h=w/3600;
    t=w%3600;
    m=t/60;
    s=t%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;

}
