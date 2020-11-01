#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i;
    int  t;
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>a[i];
    }
   //int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+t);
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<a[(t-1)/2]; //middle number ooutput
}
