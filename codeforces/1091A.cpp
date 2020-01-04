#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,b,r;
    cin>>y>>b>>r;
    while(1)
    {
        if(y+1<=(b) && (y+2)<=r)
        {
            cout<<y+(y+1)+(y+2)<<endl;
            break;
        }
        else
        {
            y--;
        }
    }
    return 0;
}
