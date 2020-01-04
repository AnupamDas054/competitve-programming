#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {

    int n;
    cin>>n;
    int arr[n+1],arr1[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>arr1[i];
    int flag=0;
    int left=-1,right=-1,value=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr1[i] && left==-1)
        {
            left = i;
            value = arr1[i]-arr[i];
        }
        else if(left!=-1 && arr[i]==arr1[i])
        {
            right=i-1;
            break;
        }
    }
    if(left==-1 && right==-1)
    {
        cout<<"YES\n";
        continue;
    }
    if(right==-1)
        right=n-1;
              //  cout<<"left "<<left<<" "<<right<<endl;

    if(value<=0)
    {
       // cout<<value<<endl;
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=left ; i<=right;i++)
        {
            arr[i]=arr[i]+value;


        }
        int flag1=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=arr1[i])
        {
            flag1=1;
            break;
        }
        }
        if(flag1==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    }
}

