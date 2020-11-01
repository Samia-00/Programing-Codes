#include<bits/stdc++.h>
using namespace std;

int main()
{
    int shape;
    cout<<"shape 1 : square"<<endl;
    cout<<"shape 2 : circle"<<endl;

    cout<<"shape : ";
    cin>>shape;
    cout<<endl;

    switch(shape)
    {
    case 1:
        cout<<"So!!! You choose square@@@"<<endl;
        int length;
        cout<<"length : ";
        cin>>length;
        cout<<"1 output area : "<<endl;
        cout<<"2 output perimeter : "<<endl;
        int ss;
        cout<<"output : "<<endl;
        cin>>ss;

        switch(ss)
        {
        case 1:
            cout<<"sooo!!!! You wannet to know  area"<<endl;
            double area;
             area=length*length;
            cout<<"the area of the square : "<<area<<endl;
            break;
        case 2:
            cout<<"sooo!!!!!! You wannet to know perimeter"<<endl;
            double perimeter;
            perimeter=4*length;
            cout<<"the perimeter of the square : "<<perimeter<<endl;
            break;
        default:
            cout<<"unsupported choice"<<endl;
            break;
        }
        cout<<"square output ends "<<endl;
        break;
        case 2:
            cout<<"sooo!!!! You choose circle@@@@"<<endl;
            int radius;
            cout<<"radius : ";
            cin>>radius;

            cout<<"1 output : area"<<endl;
            cout<<"2 output : circumference "<<endl;

            int ww;
            cout<<"output : ";
            cin>>ww;
            switch(ww)
            {
            case 1:
                cout<<"soo!! you wannet to know the area of the circle!!!"<<endl;
                double area1;
                area1=3.1416*radius*radius;
                cout<<"the area of the circle : "<<area1<<endl;
                break;
            case 2:
                cout<<"soo!! you wannet to know the circumference of the circle!!!"<<endl;
                double cum;
                cum=2*3.1416*radius;
                cout<<"the circumference of the circle : "<<cum<<endl;
                break;
            default:
                cout<<"unsupported choice"<<endl;
                break;
            }
        cout<<"circle output ends "<<endl;
        break;
      default:
        cout<<"unsupported choice"<<endl;
        break;
    }
    cout<<"how lovely!!!!!!!!!!!!!!"<<endl;
}
