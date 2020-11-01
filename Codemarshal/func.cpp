#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    int x;

    for (int i = 0; i<5; i++)
    {
        cout << "Enter a number: ";
        cin >> x;
        numbers[x];
    }

    for (int i = 5; i>0 ; i--)
    {
        cout << numbers[i];
    }

    return 0;
}
