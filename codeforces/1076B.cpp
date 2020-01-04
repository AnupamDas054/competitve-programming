#include<bits/stdc++.h>

using namespace std;


long long check(long long n)
{
    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return i;
    }
    if(n>=2)
        return n;
}

int main()
{
    long long  n;
    cin>>n;
    int cnt=0;
    if((n/2)!=0)
    {
        n=n-check(n);
        cnt++;
    }
    cout<<cnt+(n/2)<<endl;
    return 0;
}
