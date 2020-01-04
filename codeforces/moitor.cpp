#include<bits/stdc++.h>
using namespace std;
int main()
{

    unsigned long long int a,b,x,y,x1;
    cin>>a>>b>>x>>y;
    if(a*y==b*x)
    {
        cout<<a<<" "<<b<<endl;
    }
    else if(a*y>b*x)
    {
        cout<<0<<" "<<b<<endl;
    }
    else
    {
        x1=a*y;
        if(x1%x==0)
        {
            cout<<a<<" "<<(x1/x)<<endl;
        }
        else
        {
            cout<<(b*x)/y<<" "<<b<<endl;
        }
    }
    return 0;
}
