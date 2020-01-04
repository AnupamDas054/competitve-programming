#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int sum=a+b+c+d;
        if(sum>(n/2))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
