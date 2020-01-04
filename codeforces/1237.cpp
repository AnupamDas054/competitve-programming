#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n+1];
    int  flag=1;
    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            cout<<arr[i]/2<<'\n';
        }
        else
        {
              cout<<(arr[i]+flag)/2<<endl;
              flag*=-1;
        }
    }
    return 0;
}
