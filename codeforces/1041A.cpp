#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    int max1=*max_element(arr,arr+n);
    int min1=*min_element(arr,arr+n);
    int m=max1-min1+1;
    cout<<m-n<<endl;
    //cout<<max1;
}
