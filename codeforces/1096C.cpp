#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int ang;
        cin>>ang;
        int g=__gcd(180,ang);
        int n=(180/g);
        int k=(ang/g);
        if(k==n-1)
            n=n*2;
        cout<<n<<endl;;
    }


    return 0;
}

