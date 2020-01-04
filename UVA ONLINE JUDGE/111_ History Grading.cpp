#include<bits/stdc++.h>

using namespace std;
int n;
int arr1[50],arr2[50];
int dp[50][50];
int lcs(int i,int j)
{
    if(i>n ||j>n)
        return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
    int ans=0;
    if(arr1[i]==arr2[j])
        ans=1+lcs(i+1,j+1);
    else
        ans=max(lcs(i+1,j),lcs(i,j+1));
    return dp[i][j]=ans;
}

int main()
{

    while(cin>>n)
    {
       memset(arr1,0,sizeof(arr1));
       memset(dp,-1,sizeof(dp));
       int arr[50],arr3[50];
       for(int i=0;i<n;i++)
            cin>>arr[i];
       for(int i=0;i<n;i++)
       {
           arr1[arr[i]]=i+1;
       }
//       for(int i=1;i<=n;i++)
//       {
//           cout<<arr1[i]<<endl;
//       }
       while(cin>>arr3[0])
       {
           memset(dp,-1,sizeof(dp));
           memset(arr2,0,sizeof(arr2));
           for(int i1=1;i1<n;i1++)
            cin>>arr3[i1];
            for(int i1=0;i1<n;i1++)
                arr2[arr3[i1]]=i1+1;
           cout<<lcs(1,1)<<endl;
       }
    }
    return 0;
}
