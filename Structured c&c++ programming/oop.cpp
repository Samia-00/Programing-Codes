#include<iostream>
using namespace std;

class Car
{
    string colour;
    string brand;
    int value;

public:

    Car(string a,string b)
    {
        colour=a;
        brand=b;
    }

    void setColour(string str)
    {
        colour=str;
    }

    string getColour()
    {
        return colour;
    }

};
int main()
{
    Car c("blue","Ferrari");
    //c.setColour("red");

    cout<<c.getColour()<<endl;

    return 0;

}


