
#include <stdio.h>
#include <math.h>

int main()
{
  float r,d,x,y,mul,P;
  int T,i,j,z;

//printf("number of test case\n");
scanf("%d",&T);

for( i=0; i<T;i++)
{
    //printf("Input Radius r\n");
    scanf("%f",&r);

//for(j=0; j<T;j++){

    mul=r*r;
    d=(mul/2);
    x=sqrt(d);
    y=x;
    P=(4*x)+(4*y);
    printf("%d\n",P);
}
//ans[i]=P;
//
}
/*for (z=0;z<T;z++)
    printf("%f\n",ans[z]);
}*/

