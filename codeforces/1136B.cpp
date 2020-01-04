#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k,m=0,l=0;
    cin>>n>>k;

    int k1=n-k;
    if(k1==0)
    {
        if(k==1)
        {
            cout<<2*k<<endl;

        }
        else
        {
            cout<<2*n+1+(n-1)<<endl;

        }

    }
    else if(k1>=k)
    {
        cout<<2*(k-1)+1+(n-k)+2*n<<endl;
    }
    else
    {
        cout<<2*(n-k)+1+(k-1)+2*n<<endl;
    }

    return 0;
}
