#include<stdio.h>
int main()
{
double A,B,C,triangle,radius,trepizeum,sqaure,ractangle;
scanf("%lf %lf %lf",&A,&B,&C);
 triangle=(1.0/2)*A*C;
 printf("TRIANGULO: %.3lf\n",triangle);
 radius=3.14159*C*C;
 printf("CIRCULO: %.3lf\n",radius);
 trepizeum=(1.0/2)*(A+B)*C;
 printf("TRAPEZIO: %.3lf\n",trepizeum);
 sqaure=B*B;
 printf("QUADRADO: %.3lf\n",sqaure);
 ractangle=A*B;
 printf("RETANGULO: %.3lf\n",ractangle);

 return 0;
}
