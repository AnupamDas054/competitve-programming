#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    int m;
    cin>>m;
    int arr1[m+2];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
        s.insert(arr1[i]);
    }
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            int k=arr[i]+arr1[j];
            if(s.find(k)==s.end())
            {
                cout<<arr[i]<<" "<<arr1[j]<<endl;
                return 0;


            }
        }

    }

    return 0;
}
