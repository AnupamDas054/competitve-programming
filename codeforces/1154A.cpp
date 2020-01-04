#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

    ll a,b,c,k;
    ll arr[5];
    for(int i=0;i<4;i++)
        cin>>arr[i];
    sort(arr,arr+4);

    cout<<arr[3]-arr[0]<<" ";
    cout<<arr[3]-arr[1]<<" ";
    cout<<arr[3]-arr[2]<<endl;
    return 0;

}
