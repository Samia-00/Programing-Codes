#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=b-a;
    if(c<0)
    {
        int d;
        d=24+c;
        cout<<"O JOGO DUROU "<<d<<" HORA(S)"<<endl;
    }
    else if(a==b)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else
    {
        cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
    }
    return 0;

}
