#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mul=0;
    cin>>n;

    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            mul=i*i;
            cout<<i<<"^2 = "<<mul<<endl;
        }
    }
    return 0;
}

