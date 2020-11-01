
#include <stdio.h>
#include <string.h>

int main()
{
    int i,T;
   char string[1000];
   scanf("%d",&T);
   for(i=0;i<=T;i++)
   {

   //printf("Input a string to convert to upper case\n");
   gets(string);

   printf("case %d: %s\n", strupr(string));
   }

   return  0;
}
