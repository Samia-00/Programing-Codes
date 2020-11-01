#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        string str;
        getline(cin,str);
        //cin>>str;

        int len=str.size();
        int j;
        for(j=0;j<len;j++)
        {
            if((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z') )
                str[j]=str[j]+3;
        }
        string temp=str;
        int idx = 0;
        for(j=len-1;j>=0;j--)
        {
            temp[idx]=str[j];
        }



        for(j=len/2;j<len;j++)
        {
            if((temp[j]>='A' && temp[j]<='Z') || (temp[j]>='a' && temp[j]<='z') )
                temp[j]=temp[j]-1;
        }
        cout<<temp<<endl;

    }
    return 0;

}
