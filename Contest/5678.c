#include<stdio.h>
int main()
{
    int a,b,c,d;
    //char check,y,n;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    printf("Do you want to run again? press y for continue and n for exit\n");



    char check,y,n;
    scanf("%c\n",&check);
do
    {

 if(check==y)
    {
        scanf("%d %d",&c,&d);
        printf("%d\n\nDo you want to run again? press y for continue and n for exit\n",c+d);
    }
    else(check==a||check==b||check==c;check==d||check==e||check==f||chech==g||check==h||check==i||check==j||check==k||check==l)
    {
        printf("Wrong key pressed!Do you want to run again?press y for continue and n for exit\n");
    }

 }while(check==y);
    return 0;
}
