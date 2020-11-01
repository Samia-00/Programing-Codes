#include <stdio.h>
#include <string.h>

int main()
{
   char string[1000];
   int i,t;
   scanf("%d\n",&t);

   for(i=1;i<=t;i++)
   {
   gets(string);
   printf("case %d:",i);
   printf(" %s \n",strupr(string));
   }
   return  0;
}
