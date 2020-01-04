#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int n,m;
    cin>>n>>m;
    if(m%n==0)
    {
        if(m/n==1)
            cout<<0<<endl;
        else
        {
            long long int c=0;
            int k=m/n;
            while(k%2==0)
            {
                k=k/2;
                c++;
                if(k==1)
                    break;
            }
            if(k==1)
            {
                cout<<c<<endl;
                return 0;
            }
            while(k%3==0)
            {
                k=k/3;
                c++;
                if(k==1)
                    break;
            }
            if(k==1)
            {
                cout<<c<<endl;
                return 0;
            }
            cout<<-1<<endl;

        }
    }
    else
        cout<<-1<<endl;


    return 0;
}
