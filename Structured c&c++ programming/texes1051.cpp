#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a>=0.00 && a<=2000.00)
    {
        cout<<"Inseto"<<endl;
    }
    else
    {
        double f1,f2,f3,r;
        if(a>2000.00 && a<=3000.00)
        {
            f1=a-2000;
            f1=((f1*8)/100);
            r=f1;
        }
        else if(a>3000.00 && a<=4500.00)
        {
            f1=a-2000;
            f2=f1-1000;
            f1-=f2;
            f1=((f1*8)/100);
            f2=((f2*18)/100);
            r=f1+f2;

        }
        else
            {

            f1=a-2000;
            f2=f1-1000;
            f3=f2-1500;
            f1-=f2;
            f2-=f3;
            f1=((f1*8)/100);
            f2=((f2*18)/100);
            f3=((f3*28)/100);
            r=f1+f2+f3;
        }
        cout<<"R$ "<<setprecision(2)<<fixed<<r<<endl;
    }
    return 0;
}
