#include<stdio.h>
int main(){
    int x,y,z,result;
    scanf("%d %d %d",&x,&y,&z);
    result=(x-z)+(y-z)+z;
    printf("%d\n",result);
    return 0;
}
