#include<bits/stdc++.h>
#define mod 1000000009
using namespace std;



   int NthTerm(long long n)
{
    long long x = (3 * n * n) % mod;
    return (x - n + mod) % mod;
}

int main()
{

   long long s;
   cin>>s;
   cout<<NthTerm(s);
}
