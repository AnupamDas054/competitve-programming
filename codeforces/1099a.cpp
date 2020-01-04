#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int u1,h1,u2,h2;
    cin>>u1>>h1>>u2>>h2;
    if(h1<h2)
    {
        swap(h1,h2);
        swap(u1,u2);
    }
    int currw=n;
    for(int j=m;j>=0;j--)
    {
        if(j==h1)
        {
            currw+=j-u1;
            if(currw<0)
                currw=0;
        }
        else if(j==h2)
        {
            currw+=j-u2;
            if(currw<0)
                currw=0;
        }
        else
        {
            currw+=j;
        }
    }
    cout<<currw<<endl;
}
