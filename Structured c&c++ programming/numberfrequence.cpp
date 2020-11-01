#include <iostream>
using namespace std;


int main()
{
    int n, i,j,t;
    int array [2001];
    //int array_copy [2001];
     for (int i = 0; i < n; i++)
 {
     int x;
  cin >> x;
  array[x] += 1;
 }

 for (int i = 0; i < 2001; ++i)
 {
  if(array[i] != 0){
   cout << i << " aparece " << array[i] << " vez(es)" << endl;
  }
 }
 return 0;
}



