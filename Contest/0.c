#include<stdio.h>
int main()
{
    char choose,y;
    do{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    printf("Do you want to run again? press y for continue and n for exit\n");

    scanf("%d\n",&choose);
    }while(choose==y);

    /*do{

    if(choose==y)
    {
        int c,d;
      scanf("%d %d",&c,&d);
    printf("%d\n",c+d);
    }
    }while(choose==y);*/
}

