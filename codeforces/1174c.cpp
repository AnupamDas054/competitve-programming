#include<bits/stdc++.h>
using namespace std;

bool mark[100005];
int arr[100005];
bool p = 0;
vector <int> prime;

void SieveOfEratosthenes(int n)
{
    memset(mark, true, sizeof(mark));

    for (int p=2; p*p<=n; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                mark[i] = false;
        }
    }
    for(int i = 2; i <= n; i++){
        if(mark[i]){
            prime.push_back(i);
        }
        //cout<<i<<' '<<mark[i]<<endl;
    }
    //cout<<endl;
}


int main()
{

    int n;cin>>n;
    SieveOfEratosthenes(n);
    {
        int k = prime.size();
        long long sum=0;
        for(int i=2;i<=n;i++)
        {
            if(mark[i])
            {
                sum++;
                arr[i]=sum;
                cout<<arr[i]<<" ";
            }
            else
            {
                for(int j=0;j<k;j++)
                {
                    if(i%prime[j]==0)
                    {
                        cout<<arr[prime[j]]<<" ";
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
