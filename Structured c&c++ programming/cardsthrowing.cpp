#include<bits/stdc++.h>

using namespace std;
int main()
{
    while(true)
    {
        int n;
        cin>>n;
        if(n==0) break;
        queue<int> x;
        vector<int>z;
        for(int i=1; i<=n; i++)
        {
            x.push(i);
        }

        printf("Discarded cards: ");

        while(!x.empty())
        {
            if(x.size()==n) printf("%d",x.front());
            else printf(", %d",x.front());
            //z.push_back(x.front());
            x.pop();
            if(x.size()==1)
                break;
            int y=x.front();
            x.pop();
            x.push(y);

        }

        printf("\n");

        printf("Remaining card: %d\n",x.front());




    }


    return 0;
}

