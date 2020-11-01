#include<stdio.h>
int main()
{
    double R,area;
    scanf("%lf",&R);
    area=(4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n",area);
    return 0;
}
