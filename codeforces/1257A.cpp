#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,s,a,b;
        cin>>n>>s>>a>>b;
        if(a>b)
            swap(a,b);
        if(a-1<=s)
        {
            s=s-(a-1);
            a=1;
        }
        else
        {
            a=a-s;
            s=0;
        }
        if(n-b<=s)
        {
            b=n;
        }
        else
        {
            b=b+(s);

        }
        cout<<abs(a-b)<<endl;

    }
    return 0;
}
