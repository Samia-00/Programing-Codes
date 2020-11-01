#include<stdio.h>
int main(){
    int a=5,x,i=1;
    char text[]="california";
    x=++a - ++a;
    printf("%d\n",x);
    printf("i=%d\n",++i);
    printf("i=%d\n",i);
    printf("the number of text =%d",sizeof text);
    return 0;


}
