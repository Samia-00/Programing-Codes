#include<stdio.h>
int main()
{
    int z=1;
    //while (z==1)

    int a,b,c,d,sum,sum1;
    char ch,y;
    scanf("%d %d",&a,&b);
    sum=a+b;

    printf("%d\n",sum);
    printf(" Do you want to run again? press y for continue and n for exit\n ");
scanf("%c\n",&ch);
while(z==1)
{
if(ch==y)
{

    scanf("%d %d",&c,&d);
    sum1=c+d;
    printf("%d\n",&sum1);
}

else
{
    printf("Wrong key pressed!Do you want to run again?press y for continue and n for exit");
}
getchar();
}
}

 /* switch(ch)
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
}*/


 /* switch(ch)
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
}*/
