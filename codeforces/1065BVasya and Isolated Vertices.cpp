#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int n,m;
    long long int k1=0;
    int k=0;
    cin>>n>>m;
    if(m==0)
    {
        cout<<n<<" "<<n<<endl;
        return 0;
    }

    long long int  m1=(n-(2*m));
    if(m1<0)
    {
        cout<<"0"<<" ";
    }
    else
        cout<<m1<<" ";


    for(int i=1;i<=n;i++)
    {

            k1=k1+(i-1);
            if(k1>=m)
            {
                k=i;
                //cout << k<<endl;
                break;
            }
    }
    if(n-k>0){
    cout<<n-k<<endl;
    }
    else
        cout<<0<<endl;

    return 0;
}
