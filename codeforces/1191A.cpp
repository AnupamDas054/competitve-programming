#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int rem=a%4;
    if(rem==1)
    {
        cout<<0<<" "<<"A"<<endl;
        return 0;
    }
    else
    {
        if(rem==2)
        {
            cout<<1<<" "<<"B"<<endl;
        }
        if(rem==3)
        {
            cout<<2<<" "<<"A"<<endl;
        }
        if(rem==0)
        {
            cout<<1<<" "<<"A"<<endl;
        }
    }
    return 0;

}
