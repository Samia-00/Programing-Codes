#include<stdio.h>
#include<string.h>

int main()
{
    int i,T;
    char num[102],len,last_char,last_number;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",&num);
        len=strlen(num);
        last_char=num[len-1];
        last_number=last_char-0;
        if(last_number%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }
    return 0;
}

