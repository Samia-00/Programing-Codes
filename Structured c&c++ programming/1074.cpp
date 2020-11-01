#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<"NULL"<<endl;
        }
        else if(n<0 && n%2==0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
        else if(n<0 && n%2!=0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
        else if(n>0 && n%2==0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        else if(n>0 && n%2!=0)
        {
            cout<<"ODD POSITIVE"<<endl;
        }
    }
    return 0;
}


