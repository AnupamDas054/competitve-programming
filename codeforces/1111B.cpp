#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    float arr[n+1];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(n==1)
    {
        if(k<m)
        printf("%.20f",arr[0]+k);
        else
         printf("%.20f",arr[0]+m);
    }
    sort(arr,arr+n);
//    for(int i=n-1;i>=0;i--)
//    {
//        if(m-k>0){
//        arr[i]=arr[i]+k;
//        m=m-k;
//
//        }
//        else
//        {
//            arr[i]=arr[i]+m;
//            break;
//        }
//    }

   // double m1=sum/n;
    //cout<<m1<<endl;
    int k1=n;
    int i=0,k4=0;
    float n3=0,n4=0;
    for( i=0;i<m;i++)
    {
        double n1=(sum-arr[i])/(k1-1);
        double n2=(sum+1)/(k1);
        if(n1>n2)
        {
            n3=n1;
        }
        else
        {
            n3=n2;
        }
        if(n3>m)
        {
            n4=n3;
        }
        else
        {
            k4=i+1;
            break;
        }
    }
    printf("%.20f",())
}
