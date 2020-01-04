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
        int arr[n+2],visited[n+2]={0},index[n+2]={0};
        int m=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            index[arr[i]]=i;
        }
        for(int i=1;i<=n;i++)
        {
            int idx=index[i];

            while(idx>0 && arr[idx]<arr[idx-1] && visited[idx-1]==0)
            {

                    swap(arr[idx],arr[idx-1]);
                    visited[idx-1]=1;
                    idx--;
            }

        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}
