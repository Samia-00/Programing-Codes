#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=6;
    cin>>n;
    for(i=n; i<(n+(x*2)); i=i+2)
    {
        int odd;
        if(n%2==0)
        {
            odd=i+1;
            cout<<odd<<endl;
        }
        else
        {
            odd=i;

            cout<<odd<<endl;
        }
    }

    return 0;
}



