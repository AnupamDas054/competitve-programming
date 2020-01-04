#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    long long ans=0;
    int flag=0,zero=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;

        if(k>0)
        {
            ans=ans+(k-1);
        }
        else if(k==0)
        {
            ans++;
            zero=1;
        }
        else if(k<0)
        {
            if(flag==1)
            {
                if(k!=-1)
                ans=ans+(0-(k+1));
                flag=0;
            }
            else if(flag==0)
            {
                if(k!=-1)
                ans=ans+(0-(k+1));
                flag=1;
            }
        }
    }
    if(flag==1)
    {

        if(zero==0)
        ans+=2 ;
    }

    cout<<ans<<endl;
    return 0;
}
