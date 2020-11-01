#include<stdio.h>
int main()
{
    int NUMBER;
    float SALARY,HOUR,X;
    scanf("%d %f %f",&NUMBER,&HOUR,&SALARY);
    X=HOUR*SALARY;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",X);
    return 0;

}
