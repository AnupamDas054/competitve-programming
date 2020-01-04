#include<bits/stdc++.h>
using namespace std;


int main()
{


    int n,k;
    cin>>n>>k;
    int k1=240;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(k1-(5*i)>=k)
        {
            cnt++;
            k1=k1-(5*i);
        }
        else{
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
