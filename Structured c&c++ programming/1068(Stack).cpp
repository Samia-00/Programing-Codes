#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;

    st.push(5);
    st.push(7);

    while(!st.empty())
    {
        int t=st.top();
        cout<<t<<endl;
        st.pop();
    }


    return 0;
}
