#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n,total=0;
   int i,temp=0;
   for(i=0;i<6;i++)
   {
       double n;
       cin>>n;
       if(n>0)
       {

           temp=temp+1;
           total=total+n;
       }
   }
    double avg=0;
    avg=total/temp;
   cout<<temp<<" valores positivos"<<endl;
   cout<<setprecision(1)<<fixed<<avg<<endl;
    return 0;
}
