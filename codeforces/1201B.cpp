#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n+12];
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr+1,arr+n+1);
    if(sum%2==0){
        if((sum-arr[n])>=arr[n])
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    else
    cout<<"NO\n";
    return 0;
}
