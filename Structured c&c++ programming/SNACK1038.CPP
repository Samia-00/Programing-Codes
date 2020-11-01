#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1)
    {
        double c;
        c=(4*b);
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<c<<endl;
    }
    else if(a==2)
    {
        double d;
        d=(4.50*b);
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<d<<endl;
    }
    else if(a==3)
    {
        double e;
        e=(5.00*b);
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<e<<endl;
    }
    else if(a==4)
        {
        double f;
        f=(2.00*b);
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<f<<endl;
    }
    else if(a==5)
        {
        double g;
        g=(1.50*b);
        cout<<"Total: R$ "<<setprecision(2)<<fixed<<g<<endl;
    }
    return 0;

}
