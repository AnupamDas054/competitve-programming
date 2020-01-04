#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int n;
        cin>>n;
        long long cnt=0;
        while(1)
        {
            if(n==1)
            {
                cout<<cnt<<endl;
                break;
            }
            if(n%2==0)
            {
                n=n/2;
                cnt++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                cnt++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                cnt++;
            }
            else
            {
                cout<<-1<<endl;
                break;
            }

            if(n==1)
            {
                cout<<cnt<<endl;
                break;
            }
        }
    }
}
