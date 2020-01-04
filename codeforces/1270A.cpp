#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,k1,k2;
        cin>>n>>k1>>k2;
        int flag=-1;
        for(int i=0;i<k1;i++)
        {
            int m;

            cin>>m;
            if(m==n)
            {
                flag=1;
            }
        }
        for(int i=0;i<k2;i++)
        {
            int m;
            cin>>m;
            if(m==n)
            {
                flag=0;
            }
        }
        if(flag==1) cout<<"Yes\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
