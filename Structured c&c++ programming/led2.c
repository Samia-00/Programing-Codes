#include<stdio.h>
#include<string.h>

int main () {

    int i, length ,n,j;
    char str[100];

    scanf("%d",&n);

    for(j=1;j<=n;j++)
        {
        scanf("%s",str);
        length = strlen(str);

         int sum=0;
        for(i = 0;i < length; i++)
            {

            if(str[i] == '0')
                {
                sum=sum+6;
                }

            else   if(str[i] == '1')
                {
                sum=sum+2;
                }

            else if(str[i] == '2')
                {
                sum=sum+ 5;
                }

            else  if(str[i] == '3')
                {
                sum=sum+5;
                }

            else   if(str[i] == '4')
                {
                sum=sum+4;
                }

            else   if(str[i] == '5')
                {
                sum=sum+5;
                }

            else  if(str[i] == '6')
                {
                sum=sum+6;
                }

            else  if(str[i] == '7')
                {
                sum=sum+3;
                }

            else  if(str[i] == '8')
                {
                sum=sum+7;
                }

            else  if(str[i] == '9')
                {
                sum=sum+6;
                }

        }

        printf("%d leds\n", sum);

    }

    return 0;

}
