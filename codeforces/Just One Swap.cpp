#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int arr[n+2];
        map<int,int>m;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            m[arr[j]]++;
        }
        long long ans=0;
        for(int j=0;j<n;j++)
        {
            if(m[arr[j]]>1)
                flag=1;
            m[arr[j]]--;
            ans=ans+(n-(j+1)-m[arr[j]]);
        }
        cout<<ans+flag<<endl;
    }
    return 0;
}
