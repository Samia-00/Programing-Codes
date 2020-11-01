#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first,second,third;
    cin>>first>>second>>third;
    int large = first>second? (first>third? first:third):(second>third?second:third);
    cout<< large<<endl;


    int ratio;
    float angle;


    cout<<"ratio 1 : sine "<<endl;
    cout<<"ratio 2 : cosine "<<endl;
    cout<<"ratio 3 : tangent "<<endl;

    cout<<endl;

    cout<<"ratio : ";
    cin>>ratio;
    cout<<"angle : ";
    cin>>angle;

    switch(ratio)
    {
    case 1:
        cout<<"sine : "<<sin(angle)<<endl;
        break;
    case 2:
        cout<<"cosine : "<<cos(angle)<<endl;
        break;
    case 3:
        cout<<" tangent : "<<tan(angle)<<endl;
        break;
    default:
        cout<<"unsupported ratio"<<endl;
        break;
    }
    cout<<"how lovely!!!!!!!!!!!!"<<endl;

}



