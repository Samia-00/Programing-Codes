#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout<<"number : ";
    cin>>number;

    switch(number)
    {
    case -2:
    case -1:
        cout<<"negative"<<endl;
        break;
    case 0:
        cout<<"zero"<<endl;
        break;
    case 1:
    case 2:
        cout<<"positive"<<endl;
        break;
    }

}
