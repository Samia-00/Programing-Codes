#include<stdio.h>
int main()
{
    int choice;
    float temp,convert;

    printf("1.farenheight to celcius : \n");
    printf("2.celcius to farhenheight :\n ");
    printf("enter your choice :\n ");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
        printf("enter the celcius temp \n");
        scanf("%f",&temp);
        convert=(temp*1.8)+32;
        printf(" the faren temp is %f\n: ",convert);
        break;



    case 2:
        printf("enter the farhen temp \n");
        scanf("%f",&temp);
        convert=(temp-32)*1.8;
        printf(" the celcius temp is %f\n: ",convert);
        break;

    default:
        printf("non valid");
    }
}
