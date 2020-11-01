#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int X1,Y1,X2,Y2;
    while(true)
    {
        cin>>X1>>Y1>>X2>>Y2;
        if(X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0)
            break;

        if(X1 == X2 && Y1== Y2)
        {
            cout<<"0\n";
        }
        else if (int(abs(X2-X1)==abs(Y2-Y1)))
        {
            cout<<"1\n";
        }
        else if(X1 == X2 || Y1 == Y2)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }


    }
    return 0;
}
