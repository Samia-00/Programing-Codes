#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    printf("Do you want to run again? press y for continue and n for exit\n");


    char choose;
    scanf("%c\n",&choose);

    while(choose==y)
    {
        switch(choose)
        {
        case 'y':
            int c,d;
            scanf("%d%d",&c,&d);
            printf("%d\n",c+d,"\nDo you want to run again? press y for continue and n for exit\n");
        }
    }

}
