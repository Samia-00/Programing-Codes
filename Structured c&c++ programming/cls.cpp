#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
    int id;
    double gpa;

    void display()
    {
        cout<< id <<" "<< gpa << endl;
    }
    /*void setvalue(int x ,double y)
    {
        id=x;
        gpa=y;
    }*/
    student(int x ,double y)
    {
        id=x;
        gpa=y;
    }
    student()
    {
        cout<<"default"<<endl;
    }

};

int main()
{
    student ob; //alim(102,3.44),suparna(105,3.55);

   student alim(102 , 3.44);
    alim.display();


   student suparna(104 , 3.44);
    suparna.display();

    getch();

}
