#include<bits/stdc++.h>

using namespace std;
#define SIZE 300000

bool  sieve[SIZE+7]={false};
void primeSieve ( ) {
    int n=SIZE;
    sieve[0] = sieve[1] = 1;
    for ( int i = 4; i <= n; i += 2 ) sieve[i] = 1;

    int sqrtn = sqrt ( n );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }
//2cout<<sieve[4]<<endl;
 }

int main()
{

    primeSieve();
    int n,k;
    cin>>n;
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k==1)
            odd++;
        else
            even++;
    }
    long long sum=0,k1=0;
     if(even>0)
     {
         cout<<2<<" ";
         sum=2;
         even--;
         k1++;
     }
        if(odd>0)
        {

//cout<<"block4"<<endl;
            cout<<1<<" ";
            odd--;
            sum++;
            k1++;
        }
    for(int i=0;i<n-k1;i++)
    {


        if(even>0)
        {
           // cout<<"block3"<<endl;
            cout<<2<<" ";
            even--;
            sum=sum+2;
        }
        else if(odd>0)
        {

//cout<<"block4"<<endl;
            cout<<1<<" ";
            odd--;
            sum++;
        }
    }
    return 0;
}
