#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,temp=0;
    cin>>x>>y;
    int mini,maxi;
    if(x<y)
    {
        mini=x;
        maxi=y;
    }
    else{
        mini=y;
        maxi=x;
    }
    for(int i=(mini+1);i<maxi;i++)
    {
        if(i%2==1 || i%2==-1)
            {
            temp=temp+i;
            }
    }
    cout<<temp<<endl;
    return 0;
}
