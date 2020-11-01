#include<stdio.h>

int sum(int p,int q)
{
    return p+q;
}

int main()
{
    int A,B,X;
    char ch='B';

    scanf("%d%d",&A,&B);

    printf("X = %d\n",sum(A,B));


    return 0;
}
