#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,a1,b1,c1,d1,e1,f1,g1;
    scanf("%d",&n);
    printf("%d\n",n);
    a=n/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    a1=n%100;
    b=a1/50;
    printf("%d nota(s) de R$ 50,00\n",b);
    b1=a1%50;
    c=b1/20;
    printf("%d nota(s) de R$ 20,00\n",c);
    c1=b1%20;
    d=c1/10;
    printf("%d nota(s) de R$ 10,00\n",d);
    d1=c1%10;
    e=d1/5;
    printf("%d nota(s) de R$ 5,00\n",e);
    e1=d1%5;
    f=e1/2;
    printf("%d nota(s) de R$ 2,00\n",f);
    f1=e1%2;
    g=f1/1;
    printf("%d nota(s) de R$ 1,00\n",g);
   return 0;
}
