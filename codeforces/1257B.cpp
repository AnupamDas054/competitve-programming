#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a>=b || a%2==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
               if(a>b)
                {
                    cout<<"yes"<<endl;
                    break;
                }
            long long prev=a;
            while(1)
            {

                prev=a;

                if(a%2==1 && a>1)
                    a--;
                a=(a*3)/2;
                if(a==prev && a<b)
                {
                    cout<<"NO"<<endl;
                    break;
                }
                if(a>b)
                {
                    cout<<"Yes"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
