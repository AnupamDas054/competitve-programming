#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[102];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int cnt=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)
        {
            cnt++;
            arr[i+1]=0;
        }

    }
    cout<<cnt<<endl;
}
