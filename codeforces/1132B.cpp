#include<bits/stdc++.h>

using namespace std;

struct k
{

    long long int a,b;
};
bool cmp(struct k x,struct k y)
{
    return x.a>y.a;
}
int main()
{

    int n;
    cin>>n;
    struct k arr[n+23];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i].a;
        arr[i].b=i;
    }
    sort(arr+1,arr+n+1,cmp);
    long long int sum[n+23]={0};
    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+arr[i].a;
    }
    long long int m;cin>>m;
    long long int k;
    for(int i=1;i<=m;i++)
    {
        cin>>k;
        long long int m1=sum[n]-sum[k];
        long long int m2=sum[k-1];
        cout<<m1+m2<<endl;
    }





    return 0;
}
