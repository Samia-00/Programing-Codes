#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"1'st quardant";
    }
    else if(x<0 && y>0)
    {
        cout<<"2nd quardant";
    }
    else if(x<0 && y<<0)
    {
        cout<<"3rd quardant";
    }
    else
    {
        cout<<"4th quardant";
    }
    return 0;
}
