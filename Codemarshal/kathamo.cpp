#include<iostream>
//#include<cstdlib>
using namespace std;

int area (int a, int b)
{
  int r;
  r=a*b;
  return r;
}
int perimeter(int a,int b)
{
    int x;
     x=2*(a+b);
     cout<<x<<endl;
    return x;
}
int even (int a)
{
    if (a%2==0)
    {
        cout<<"the number is even"<<" "<<endl;
    }
    else
    {
        cout<<"the number is odd"<<" "<<endl;
    }
}
int cube(int a,int b,int c)
{
    int j;
    j=a*b*c;
    cout<<j<<endl;    //return j;
}
void degree(int c)
{
    float f;
    f=(9*c)/5+32;
    cout<<"tempareture is : "<<f <<" degree celcius"<<endl;
}
void tempt(int f)
{
    float c;
    c=5*((f-32)/9);
    cout<<"the tempt is : "<<c<< " degree celcius"<<endl;
}
int time(int a, int b, int c)
{
    int d;
    d=a*3600+b*60+c;
    cout<<" total time in second :"<<d<<endl;
}
void num(int a, float p)
{
    cout<<"then integer number is :"<<a<<endl<<"the float number is : "<<p<<endl;

}
int rev(int a,int b,int c )
{
    cout<<"numbers are : "<<a <<" "<<b<<" "<<c<<endl;

    cout<<"reverse numbers are : "<<c<<" "<<b<<" "<<a<<endl;
}
int main()
{
    int z=area(3,4);
    cout<<"the area is"<<" "<<z<<"\n";
    cout<< "the peremeter is ";
    perimeter(4,4);
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    even(a);
    cout<<"the cube is : ";
    cube(3,3,4);
    degree(4);
    tempt(4);
    cout<< "Hour:Minute:Second: ";
    int b,c;
    cin>>a>>b>>c;
    time (a,b,c);
    float p;
    cin>>a>>p;
    num(a,p);
    cout<<"Enter 3 numbers :";
    cin>>a>>b>>c;
    rev(a,b,c);

    return EXIT_SUCCESS;

}
