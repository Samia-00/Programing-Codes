#include<stdio.h>

int main(){
    int num,j,s=0,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    //printf("\nEnter a number:");
    scanf("%d",&num);
    //printf("\n");

    for(j=1;j<num;j++){
        if(num%j==0){
            s=s+j;
        }
    }

    if(s==num){
        printf("eh perfeito\n");
    }
    else{
        printf("nao eh perfeito\n");
    }
}

    return 0;
}
