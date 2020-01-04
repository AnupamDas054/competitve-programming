#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int n,k1,sum=0;
    cin>>n>>k1;
    long long int red=(n*2);
    long long int green=(n*5);
    long long int blue=(n*8);
    if(red%k1==0)
        sum+=(red/k1);
    else
        sum+=(red/k1)+1;
    if(green%k1==0)
        sum+=(green/k1);
    else
        sum+=(green/k1)+1;
    if(blue%k1==0)
        sum+=(blue/k1);
    else
        sum+=(blue/k1)+1;
        cout<<sum<<endl;


    return 0;
}
