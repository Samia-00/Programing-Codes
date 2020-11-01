#include<bits/stdc++.h>
using namespace std;


int main()
{
    string c;
    scanf("%s",c);
    if(c[0]>='a' && c[0]<='z')
        {
    c[0]=toupper(c[0]);
    }
    printf("%s",c);
}

