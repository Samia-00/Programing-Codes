#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,temp=0;
    int temp1=0;
    int c=0;
    int b=0;
    for(i=0; i<5; i++)
    {
        cin>>a;
        if(a<0)
        {

            b=b+1;
        }
        if(a>0)
        {

            c=c+1;
        }

        if(a%2==0)
        {

            temp=temp+1;
        }
        if(a%2!=0)
        {


            temp1=temp1+1;
        }
    }
    cout<<temp<<" valor(es) par(es)"<<endl;
    cout<<temp1<<" valor(es) impar(es)"<<endl;
    cout<<c<<" valor(es) positivo(s)"<<endl;
    cout<<b<<" valor(es) negativo(s)"<<endl;
    return 0;
}


