#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printinorder(int a, int b,int c)
{
    int mini,mid,maxi;
    if(a<b && a<c)
    {
        mini=a;
        if(b<c)
        {
            mid=b;
            maxi=c;
        }
        else
        {
            mid=c;
            maxi=b;
        }
    }
     if(b<a && b<c)
    {
        mini=b;
        if(a<c)
        {
            mid=a;
            maxi=c;
        }
        else
        {
            mid=c;
            maxi=a;
        }
    }
    if(c<a && c<b)
    {
        mini=c;
        if(b<a)
        {
            mid=b;
            maxi=a;
        }
        else
        {
            mid=a;
            maxi=b;
        }
    }
    cout<<mini<<endl<<mid<<endl<<maxi<<endl;
}
int main()
{
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    printinorder( a , b , c);
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}

