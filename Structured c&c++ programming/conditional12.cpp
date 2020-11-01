#include<iostream>
using namespace std;

int main()
{
    int math;
    cin>>math;
    if(math>=90)
    {
        cout<<"A";
    }
    else if(math>=80 && math<90)
    {
        cout<<"B";
    }
    else if(math>=70 && math<80)
    {
        cout<<"C";
    }
    else if(math>=60 && math<70)
    {
        cout<<"D";
    }
    else if(math>=50 && math<60)
    {
        cout<<"E";
    }
    else
    {
        cout<<"FAIL";
    }
    return 0;
}
