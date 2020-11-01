#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if((float(a+b)>c && float(b+c)>a && float(c+a)>b))
    {
        double x;
        x=a+b+c;
        cout<<"Perimetro = "<<setprecision(1)<<fixed<<x<<endl;
    }
    else {
        double y;
        y=(c*(a+b))/2;
        cout<<"Area = "<<setprecision(1)<<fixed<<y<<endl;
    }
    return 0;
}
