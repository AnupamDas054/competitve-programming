#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    long long int arr[n+2],arr1[n+2];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    int m=1,k=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]==arr1[n-1])
        {
            m++;
            k=m;
             v.push_back(k);

        }
        else{
            m=1;

        }
    }
    sort(v.rbegin(),v.rend());
    if(v.size()>0)
    cout<<v[0]<<endl;
    else
        cout<<1<<endl;
}
