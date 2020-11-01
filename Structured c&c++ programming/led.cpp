
#include<iostream>
#include<cstring>
using namespace std;

int main () {

    int i,n,j;

    string s[100];

    cin>>n;

    for(j=1;j<=n;j++)
        {
        cin>>s;
        int size = s.length();

         int sum=0;
        for(i = 0;i<size;i++)
            {

            if(s[i] == '0')
                {
                sum=sum+6;
                }

            else   if(s[i] == '1')
                {
                sum=sum+2;
                }

            else if(str[i] == '2')
                {
                sum=sum+ 5;
                }

            else  if(str[i] == '3')
                {
                sum=sum+5;
                }

            else   if(str[i] == '4')
                {
                sum=sum+4;
                }

            else   if(str[i] == '5')
                {
                sum=sum+5;
                }

            else  if(str[i] == '6')
                {
                sum=sum+6;
                }

            else  if(str[i] == '7')
                {
                sum=sum+3;
                }

            else  if(str[i] == '8')
                {
                sum=sum+7;
                }

            else  if(str[i] == '9')
                {
                sum=sum+6;
                }

        }

        printf("%d leds\n", sum);

    }

    return 0;

}
