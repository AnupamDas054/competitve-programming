#include<bits/stdc++.h>
using namespace std;
bool mycmp(long long int a,long int b)
{
    if(a%2==0)
        return 1;
    else if(b%2==0)
    return 0;
}
int main()
{


    int n,m;
    cin>>n>>m;
    long long int arr[n+1],b[m+2];
    long long int even1=0,odd1=0,odd2=0,even2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0 )
       {
           odd1++;
       }
       else
        even1++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
       if( b[i]%2!=0)
       {
           odd2++;
       }
       else
        even2++;
    }
    //sort(arr,arr+n,mycmp);
    //sort(b,b+m,mycmp);

    /*for(int i=0;i<n;i++)
    {
      cout<<arr[i];
    }*/
    //long long int cnt=0;

    cout<<min(odd1,even2)+min(odd2,even1)<<endl;
    return 0;
}
