#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int n, k=5;
    //n=(100%k?k+1:k-1);
   // cout<<"n = "<<n<<" k = "<<k<<endl;

    int found=0,count=5;

    if(!found || ++count == 0)
        cout<<"danger"<<endl;
    cout<<"count = "<<count<<endl;

    int n=5;
    if(n=0)
    {
        cout<<"n is zero"<<endl;
    }
    else
        cout<<"n is not zero"<<endl;
    cout<<"square of n is "<<n*n<<endl;
}
