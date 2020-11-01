#include<iostream>
using namespace std;

int main()
{
    int x,y,sum;
    if(x>=y)
    {
        sum=sum+x;
        cout<<"x large"<<endl;
    }
    else
    {
        sum=sum+y;
        cout<<"y large"<<endl;
    }

    int n,k=5;
    n=(100%k?k+1:k-1);
    cout<<"n = "<<n<<" k = "<<k<<endl;

    int found=0,count=5;
    if(!found || ++count==0)
        {
        cout<<"danger"<<endl;
        }
    cout<<"count = "<<count<<endl;
    int s=5;
    if(s==0)
    {
        cout<<"s is zero"<<endl;
    }
    else
    {
        cout<<"s is not zero"<<endl;
    }
    cout<<"square of s "<<s*s<<endl;

}
