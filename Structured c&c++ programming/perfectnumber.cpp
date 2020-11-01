#include<iostream>
using namespace std;
int main()
{
    int i,t,j,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int sum=0;
        cin>>n;
        for(j=1;j<n;j++)
        {

            if(n%j==0)
            {
                sum=sum+j;
            }

        }
        if(sum==n)
        {
            cout<<n<<" eh perfeito\n";
        }
        else
        {
            cout<<n <<" nao eh perfeito\n";
        }
    }
    return 0;
}
