#include<bits/stdc++.h>
using namespace std;

class Circle
{
protected:
    double radius;
};
class ball : public Circle
{
public:
    double compute_area(double r)
    {
        radius=r;
        double area=3.1416*radius*radius;
        cout<<"Radius is: "<<radius<<endl;
        cout<<"Area is : "<<area;
    }
};
int main()
{
    ball obj1;
    obj1.compute_area(1.5);
    return 0;
}
