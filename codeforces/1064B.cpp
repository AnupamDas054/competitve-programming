#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<1<<endl;
        }
        else if(n%2==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n+1<<endl;
        }
    }
}
