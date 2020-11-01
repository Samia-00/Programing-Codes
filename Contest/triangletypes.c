#include<stdio.h>
int main()
{
    int a,b,i,j,k,c,temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a < b){temp=a;a=b;b=temp;}
    if(a < c){temp=c;a=c;c=temp;}
    if(b < c){temp=b;b=c;c=temp;}

    i=a*a;
    j=b*b;
    k=c*c;
    if(a>=b+c)printf("nao");

    else {
        if(i=j+k)printf("we r mad");
        if(i>j+k)printf("we to have me");
        if(i<j+k)printf("looser");
        if(a==b && b==c)printf("raiseed");
        if(a==b || b==c || c==a)printf("character");
    }
    return 0;
}
