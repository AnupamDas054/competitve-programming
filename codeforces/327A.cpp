#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sign=0;
    cin>>n;

    int arr[n+1];

    int plus1[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==0 && sign==0)
        {
            sign=1;
        }
        plus1[i]=plus1[i-1]+arr[i];
    }
    arr[0]=0;
    if(n==1 && arr[1]==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==1 && arr[1]==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(sign==0)
    {
        cout<<n<<endl;
        return 0;
    }


    int start=0,end1=0,m1=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int k=plus1[j]-plus1[i-1];

            int k1=j-i+1;
            int m=k1-k;
           // cout<<m<<" "<<i<<" "<<j<<endl;
            if(m>m1 && (m-k)>k)
            {
                m1=m;
                start=i;end1=j;
            }
            else if(m==m1 && (m-k)>k && (j-i)<(end1-start))
            {
                m1=m;
                start=i,end1=j;
            }

        }
    }
//cout<<start<<" "<<end1<<endl;

    for(int j1=start;j1<=end1;j1++)
    {
        if(arr[j1]==0)
            arr[j1]=1;
            else
                arr[j1]=0;
    }
    int sum=0;
    for(int i=1;i<=n;i++)
      sum=sum+arr[i];

    cout<<sum<<endl;
    return 0;
}
