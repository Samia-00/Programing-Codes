#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,temp=0;
    for(i=0; i<5; i++)
    {
        cin>>a;
        if(a<0)
        {
            a=-a;
        }
        if(a%2==0)
        {

            temp=temp+1;
        }
    }
    cout<<temp<<" valores pares"<<endl;
    return 0;
}

