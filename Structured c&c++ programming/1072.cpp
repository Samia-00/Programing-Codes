#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,temp=0,temp1=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        if(n>=10 && n<=20)
        {
            temp=temp+1;

        }
        else{
            temp1=temp1+1;

    }


    }
    cout<<temp<<" in"<<endl;
    cout<<temp1<<" out"<<endl;
    return 0;
}
