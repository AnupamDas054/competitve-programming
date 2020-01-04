
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k=0,m=0;
    cin>>n;
    int arr[n+1];
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int mx1 = INT_MAX;
    for(int j=1;j<=n;j++){
            m=0;
    for(int i=0;i<n;i++)
    {
        m=m+(fabs(j-1)+fabs(i+1-j)+fabs(i))*2*arr[i];

    }
    if(m<mx1){
        mx1=m;
    }

    }
    cout<<mx1<<endl;
    return 0;
}
