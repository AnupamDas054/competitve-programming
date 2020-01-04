#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n+5];
    int l1=0,l2=0;
    long long int odd1[n+2]={0},odd2[n+2]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i%2!=0)
        {
           if(i==1)
            odd1[i]=arr[i];
           else
           odd1[i]=odd1[i-2]+arr[i];
           //even1[i]=even1arr[i];
           l1=i;
        }
        else
        {
            if(i==2)
              odd2[i]=arr[i];
            else
              odd2[i]=odd2[i-2]+arr[i];
              l2=i;

        }
    }
    //cout<<l2<<l1<<endl;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            if(odd2[l2]==(odd1[l1]-arr[1]))
            {
                c++;
            }
        }
        else if(i%2==0)
        {
            if(((odd1[l1]-odd1[i-1])+odd2[i-2])==(odd1[i-1]+odd2[l2]-odd2[i]))
            {
                c++;
            }
        }
        else
        {
            if((odd2[l2]-odd2[i-1]+odd1[i-2])==(odd2[i-1]+odd1[l1]-odd1[i]))
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}
