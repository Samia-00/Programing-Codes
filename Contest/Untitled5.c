
#include<stdio.h>
void main()
{
    double num1,num2,num3;
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("%lf eh o maior\n",num1);
    }
    else if(num2>num3)
    {
        printf("%lf eh o maior\n",num2);
    }
    else
    {
        printf("%lf eh o maior\n",num3);
    }
    return 0;
}
