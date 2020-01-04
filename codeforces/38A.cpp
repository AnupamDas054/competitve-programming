#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
    int a,b;
    cin>>a>>b;
    a--;b--;
    long long sum=0;
    while(a!=b)
    {
        sum+=arr[a];
        a++;

    }
    cout<<sum<<endl;

    return 0;
}
