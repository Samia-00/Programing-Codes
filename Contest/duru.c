#include<stdio.h>
int main()
{
    int z=1;
    while (z==1)
{
    int a,b,sum,c,d,mum;
    char ch,n,y;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d\n",sum);
    printf(" Do you want to run again? press y for continue and n for exit\n ");
scanf("%c\n",&ch);

    switch(ch)
    {

case 'y' :
    {
        printf("%d+%d=%d\n",c,d,c+d);
        break;
    }

case 'a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,q,r,s,t,u,v,w,s,t,x,z':
       printf("Wrong key pressed!Do you want to run again?press y for continue and n for exit");
        break;
    }

    }
}
