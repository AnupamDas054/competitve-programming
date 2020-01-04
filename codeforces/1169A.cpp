#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;

    while(1)
    {
        if(a==b)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(a==x || b==y)
        {
            break;
        }

        if(a==n)
        {
            a=0;
        }
        a++;
        if(b==1)
        {
            b=n+1;
        }
        b--;
    }
    cout<<"NO\n";
}
