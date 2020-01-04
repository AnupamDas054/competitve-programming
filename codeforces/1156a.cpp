#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==1 && arr[i+1]==2)
        {
            sum=sum+3;
        }
        else if(arr[i]==1 && arr[i+1]==3)
        {
            sum=sum+4;
        }
        else if(arr[i]==2 && arr[i+1]==3)
        {
            cout<<"Infinite"<<endl;
            return 0;
        }
        else if(arr[i]==2 && arr[i+1]==1)
        {
            sum=sum+3;
        }
        else if(arr[i]==3 && arr[i+1]==1)
        {
            sum=sum+4;
        }
        else if(arr[i]==3 && arr[i+1]==2)
        {
           cout<<"Infinite"<<endl;
           return 0;

        }
        if(i>=2 && arr[i]==2 && arr[i-1]==1 && arr[i-2]==3)
            sum--;
    }
     if(n>=3 && arr[n-1]==2 && arr[n-2]==1 && arr[n-3]==3)
            sum--;
    cout<<"Finite"<<endl;
    cout<<sum<<endl;
    return 0;
}
