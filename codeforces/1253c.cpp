#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int arr[n+2];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  sort(arr,arr+n);
//  for(int i=0;i<n;i++)
//    cout<<arr[i]<<endl;
  long long int  cnt[n+3]={0};
  for(int i=1;i<=n;i++)
    cnt[i]=cnt[i-1]+arr[i-1];


  for(int i=1;i<=n;i++)
  {
      int index=i;
      int day=0;
      long long sum=0;
      while(1)
      {
          day++;
          if(index<=m)
          {

              sum+=cnt[index]*day;
             // cout<<"for "<<i<<" "<<sum<<endl;
              index=-1;
          }
          else if(index>m)
          {
              //5 2
              long long value=cnt[index]-cnt[index-m];
              index=index-m;
              sum+=value*day;
              //cout<<"for "<<i<<" "<<sum<<endl;
          }
          if(index<=0)
          {
              break;
          }

      }
      cout<<sum<<" ";

  }
  cout<<endl;
  return 0;
}
