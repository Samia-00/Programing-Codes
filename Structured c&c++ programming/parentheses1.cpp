
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main()
{
 int size;
 string s;

 while(true)
 {
  size = s.length();
  stack<char> s1;

  for (int i = 0; i < size; ++i)
  {
   if(s[i] == '(')
    s1.push(i);
   if(s[i] == ')'){
    if(!s1.empty()){
     s1.pop();
    }else{
     s1.push(i);
    }
   }

  }

  if(s1.empty()){
   cout << "correct" << endl;
  }else{
   cout << "incorrect" << endl;
  }
 }

 return 0;
}
