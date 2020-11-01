#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    cin>>a;
    if (a>=0.00 && a<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if (a>2000.00 && a<=3000.00)
    {
        a=a-2000.00;
        a=(a*8)/100;
        cout<<"R$ "<<setprecision(2)<<fixed<<a<<endl;
    }
    else if (a>3000.00 && a<=4500.00)
    {
        a=a-3000.00;
        a=(a*18)/100;
        cout<<"R$ "<<setprecision(2)<<fixed<<a+80<<endl;
    }

    else if (a>4500.00)
    {
        a=a-4500.00;
        a=(a*28)/100;
        cout<<"R$ "<<setprecision(2)<<fixed<<a+80+270<<endl;
    }
    return 0;

}
