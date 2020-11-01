#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a;
    cout<<endl;

    b=0;
    for(int c=0;c<a;c++)
    {
        int i;
        cin>>i;
        if (i>b)
        {
            b=i;
        }
    }
    cout<<b<<endl;
}
