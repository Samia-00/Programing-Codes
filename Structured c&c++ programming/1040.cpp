#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double ava1;
    ava1=((a*2)+(b*3)+(c*4)+(d*1))/10;
    cout<<"Media: "<<setprecision(1)<<fixed<<ava1<<endl;
    if (ava1<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(ava1>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else
    {
        cout<<"Aluno em exame."<<endl;
        double ava2,e;
        cin>>e;
        cout<<"Nota do exame: "<<e<<endl;
        ava2=(ava1+e)/2;
        if(ava2>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<setprecision(1)<<fixed<<ava2<<endl;

    }
    return 0;
}
