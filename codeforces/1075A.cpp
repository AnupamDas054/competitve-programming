#include<bits/stdc++.h>

using namespace std;
typedef unsigned  long long int ll;
typedef long long int ll1;

int main()
{

    ll1 n,a,b;
    cin>>n>>a>>b;
    ll1 k1=abs(a-1);
    ll1 k2=abs(b-1);
    ll1 k3=abs(a-n);
    ll1 k4=abs(b-n);
    if((k3+k4)<(k1+k2))
        cout<<"Black\n";
    else
        cout<<"White\n";

    return 0;
}
