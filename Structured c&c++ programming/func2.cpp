#include<iostream>
#include<string>
using namespace std;



int getvalues(string s);

int main()
{
    string s,m,n;
    cin>>s>>m>>n;
    int z=getvalues(s);
    int x=getvalues(m);
    int y=getvalues(n);
    cout<<z<<endl<<x<<endl<<y<<endl;
    return 0;
}

int getvalues(string s)
{
    int count=0;
    for(int i=0; i<s.size(); i+=1)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        {
            count++;
        }
    }
    return count;
}

