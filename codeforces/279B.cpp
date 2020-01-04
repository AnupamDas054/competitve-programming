#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    long long int t,k=0;
    cin>>n>>t;
    long long int arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    long long sum=0;

    int j=-1,cnt=0;

    for(int i=0; i<n; i++)
    {

        if(sum+arr[i]<=t)
        {
            cnt++;
        }
        else
        {
            sum+=arr[i];
            while(sum>t)
            {
                j++;
                sum=sum-arr[j];
            }

        }

        cnt=max(cnt,i-j);
    }

    cout<<cnt<<endl;

    return 0;
}
