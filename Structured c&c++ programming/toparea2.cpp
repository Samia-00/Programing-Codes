#include<bits/stdc++.h>

using namespace std;
int main()
{


    string c;
    cin>>c;
    int i,j;
    double m[12][12];
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        cin>>m[i][j];

    }
    double sum=0.0;
    for(i=0;i<=4;i++)
    {
        for (j=i+1;j<11-i;j++)
            {
        sum=sum+m[i][j];
            }
    }
    if(c[0]=='S')
    {
        cout<<setprecision(1)<<fixed<<sum<<endl;
    }
    else if(c[0]=='M')
    {
        sum=sum/30.0;
        cout<<setprecision(1)<<fixed<<sum<<endl;
    }
    return 0;
}
