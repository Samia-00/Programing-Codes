#include<bits/stdc++.h>
using namespace std;

int series (int a ,int d, int n)
{
    int c = a+(n-1)*d;
    int s = n*(2*a+(n-1)*d)/2;
    cout<<" n tomo pod : "<<c<<endl;
    cout<<" n tomo poder somoshti : "<<s<<endl;
}

int rev(int a)
{
    int rev=0;
    rev=rev*10+a%10;
    a=a/10;

    rev=rev*10+a%10;
    a=a/10;

    rev=rev*10+a%10;

    cout<<"the revers number is : "<<rev<<endl;
}
int tri(int r,int t, int p)
{
    double s,w;
    s=(r+t+p)/2;
    w=sqrt(s*(s-r)*(s-t)*(s-p));
    cout<<"The area of the triangle : "<<w<<endl;
}

int triangle(int q1,int q2,int q3)
{
    int l1=acos(((q1*q1+q2*q2)-q3*q3)/2*q1*q2);
    int l2=acos(((q1*q1+q3*q3)-q2*q2)/2*q1*q3);
    int l3=acos(((q2*q2+q3*q3)-q1*q1)/2*q2*q3);

    cout<<"the angle l1 is : "<<l1<<endl;
    cout<<"the angle l2 is : "<<l2<<endl;
    cout<<"the angle l3 is : "<<l3<<endl;
}

int express(int a1, int a2,int a3,int a4,int a5,int a6 )
{
    double x1,y1;
    y1=(a1*a6-a4*a3)/(a3*a1-a2*a4);
    x1=(a3-a2*y1)/a1;
    cout<<"the value of x : "<<x1<<endl;
    cout<<"the value of y : "<<y1<<endl;
}


int exp(int x,int y)
{
    int s=y+3;
    int r =y-2;
    int a=y*5;
    int b=x/y;
    int c=x%y;
    cout<<"x = "<<s<<endl;
    cout<<"x = "<<r<<endl;
    cout<<"x = "<<a<<endl;
    cout<<"x = "<<b<<endl;
    cout<<"x = "<<c<<endl;
}

int main()
{
   int a,d,n;

   cin>>a>>d>>n;
   series(a,d,n);
   int x,y;
   cout<<"x = ";
   cin>>x;
   cout<<"\n";
   cout<<"y = ";
   cin>>y;
   exp(x,y);
   cout<<"input a number : ";
   cin>>a;
   rev(a);
   int r,t,p;
   cout<<" input 3 arms length of the triangle : ";
   cin>>r>>t>>p;
   tri(r,t,p);
   int q1,q2,q3;
   cout<<"input 3 arms length : ";
   cin>>q1>>q2>>q3;
   triangle(q1,q2,q3);
   int a1,a2,a3,a4,a5,a6;
   cout<<"input 6 values : ";
   cin>>a1>>a2>>a3>>a4>>a5>>a6;
   express(a1,a2,a3,a4,a5,a6);
}

