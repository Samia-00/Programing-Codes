#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a>0.00 && a<=400.00)
    {
        double b;
        b=(a+(a*15)/100);
        cout<<"Novo salario: "<<setprecision(2)<<fixed<<b<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<fixed<<((a*15)/100)<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(a>400.00 && a<=800.00)
    {
        double c;
        c=(a+(a*12)/100);
        cout<<"Novo salario: "<<setprecision(2)<<fixed<<c<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<fixed<<((a*12)/100)<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(a>800.00 && a<=1200.00)
    {
        double d;
        d=(a+(a*10)/100);
        cout<<"Novo salario: "<<setprecision(2)<<fixed<<d<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<fixed<<((a*10)/100)<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(a>1200.00 && a<=2000.00)
    {
        double e;
        e=(a+(a*7)/100);
        cout<<"Novo salario: "<<setprecision(2)<<fixed<<e<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<fixed<<((a*7)/100)<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(a>2000.00)
    {
        double f;
        f=(a+(a*4)/100);
        cout<<"Novo salario: "<<setprecision(2)<<fixed<<f<<endl;
        cout<<"Reajuste ganho: "<<setprecision(2)<<fixed<<((a*4)/100)<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
