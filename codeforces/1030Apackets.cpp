#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int cnt=0;
    while(n!=0)
    {
        n=n/2;
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
