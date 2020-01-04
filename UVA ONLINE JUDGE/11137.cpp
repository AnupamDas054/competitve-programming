#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>coin;
    for(int i=1;i<22;i++)
    {
        coin.push_back(i*i*i);

    }
    int k=coin.size();
    while(cin>>n)
    {

        long long int nways[n+2];
        for(int i=0;i<=n;i++)
            nways[i]=0;
        nways[0]=1;
        for(int i=0 ; i<k ; i++)
        {
            for(int j=1 ; j<=n ; j++)
            {
                if(coin[i]<=j){
                    nways[j]+=nways[j-coin[i]];
                   // cout<<nways[j]<<endl;
                }
            }
        }
        cout<<nways[n]<<endl;
    }
}
