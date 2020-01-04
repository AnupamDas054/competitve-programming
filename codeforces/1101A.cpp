#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int l,r,d;
        cin>>l>>r>>d;
        if(d<l)
        {
            cout<<d<<endl;
        }
        else
        {
            long long k=r/d;
            cout<<d*(k+1)<<endl;
        }
    }
    return 0;
}
