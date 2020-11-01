#include<stdio.h>
#include<string.h>

int main()
{
    int i,T;
    char n[102];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",&n);
        len=strlen(n);
        last_char=n[len-1];
        last_number=last-char-0;
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
