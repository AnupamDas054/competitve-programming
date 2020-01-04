#include<bits/stdc++.h>
using namespace std;
int n,k;
int arr[54];

vector<int>v;

long long int subset(int i,long long int curr_sum)
{
    if(i==n)
    {
        if(curr_sum==k)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
   if(curr_sum>k)
        return 0;
    long long int  sum1 = subset(i+1,curr_sum);
    v.push_back(arr[i]);
    long long int sum2= subset(i+1,curr_sum+arr[i]);
    v.pop_back();
//    return sum1+sum2;
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(0);

    while(scanf("%d",&n)==1)
    {
        scanf("%d",&k);
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        sort(arr,arr+n);
       // cout<<subset(0,0)-1<<endl;
        printf("%lld\n",subset(0,0)-1);
        v.clear();

    }
    return 0;
}
