#include<bits/stdc++.h>

using namespace std;

int main()
{

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        long long int n,a,b;
        cin>>n>>a>>b;

        if((a*2)<=(b))
        {
            cout<<n*a<<endl;
        }
        else
        {
            cout<<(n%2)*a+(n/2)*b<<endl;
        }
    }

    return 0;
}
