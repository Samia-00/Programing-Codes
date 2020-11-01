#include<iostream>
using namespace std;

int add(int a,int b)
{
    int x = a+b;
    return x;
}

int main()
{
    int z=3;
    int y=3;
    int r=add(z,y);
    cout<<"the value is "<<r<<endl;
    return 0;
}
