#include<stdio.h>
int main(){
    float time;
    printf("Time=%f");
    scanf("%f\n",&time);
    if((time>=0.) &&(time<12.)){
        printf("Good Morning");
    }
    else if((time>=12.)&&(time<18.)){
        printf("Good Afternoon");
    }
    else if((time>=18.)&&(time<24.)){
        printf("Good Evening");
    }
    else{
        printf("the tiime is out of range");
    }

}
