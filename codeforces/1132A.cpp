#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==d && a!=0  && c!=0)
    {
        cout<<1<<endl;
    }
    else if(a==d && c==0 )
    {
        cout<<1<<endl;
    }
    else if(a==0 && b==0 && c==0 && d==0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
