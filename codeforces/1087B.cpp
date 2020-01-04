#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n,k;
    cin>>n>>k;

    for(long long int i=2;i<=10000000;i++)
    {
        long long int m1=(i/k);
        if((i/k)*(i-(m1*k))==n )
        {
            cout<<i<<endl;
            break;
        }
    }
}
