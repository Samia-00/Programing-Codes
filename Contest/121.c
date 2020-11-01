#include<stdio.h>
int main()
{

    char z=1,y;
    while(z==1){
    int a,b;

    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    printf("Do you want to run again? press y for continue and n for exit\n");
    scanf("%c\n",&z);
    }

}
