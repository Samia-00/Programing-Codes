#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len,len1,k,l,m,n,sum;
        char s[10000],c[10000];

        cin>>s>>c;
        int i=len=strlen(s);
        int j=len1=strlen(c);
        if(j>i)
        {
            cout<<"nao encaixa"<<endl;
        }
        else if(i>=j)
        {
            k=i-j;
            m=0;
            sum=0;
            for(n=k; n<i;n++)
            {
                if(s[n]==c[m])
                    sum=sum+1;
                       m=m+1;
            }
            if(sum==j)
            {
                cout<<"encaixa"<<endl;
            }
            else
            {
                cout<<"nao encaixa"<<endl;
            }
        }
    }

    return 0;
}
