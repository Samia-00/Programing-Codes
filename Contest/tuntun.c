#include<stdio.h>
int main()
{
    int sn,pn,tn,fn;
    float price1,total,price2;
    scanf("%d %d %f",&sn,&pn,&price1);
    scanf("%d %d %f",&tn,&fn,&price2);
    total=pn*price1+fn*price2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
