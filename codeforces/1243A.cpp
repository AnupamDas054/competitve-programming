#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int cnt=1;
        int set1=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(cnt>=arr[i])
                break;
                cnt++;


        }
        cout<<cnt<<endl;
    }
    return 0;
}
