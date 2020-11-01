#include<stdio.h>
int main()
{
    char jakharta[100];
    float salary;
    double r,Total;
    gets(jakharta);
    scanf("%f %lf",&salary,&r);

     Total=salary+(r*15)/100;

     printf("TOTAL = R$ %.2lf\n",Total);


    return 0;


}
