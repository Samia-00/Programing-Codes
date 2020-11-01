#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,i,j,Size;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int sum=0;
        cin>>s;
        Size =s.length();
        for(j=0;j<Size;j++)
        {
            if(s[j] == '0' || s[j] == '9' || s[j] == '6')
                {
                sum=sum+6;
                }
            else if(s[j] == '1')
                {
                sum =sum+2;
                }
            else if(s[j] == '2' || s[j] == '3' || s[j] == '5')
                {
                sum =sum+5;
                }
            else if(s[j] == '4')
                {
                sum =sum+4;
                }
            else if(s[j] == '7')
            {
                sum =sum+3;
            }
            else
                {
                sum =sum+7;
                }
        }
         cout << sum<< " leds" << endl;

    }
    return 0;
}
