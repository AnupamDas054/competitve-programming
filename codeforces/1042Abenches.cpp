#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,arr[1000];
    cin>>n>>m;
    int large = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(large<arr[i])
            large=arr[i];
    }

}
