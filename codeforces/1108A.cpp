#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
          long int n1,n2,n3,n4;
        cin>>n1>>n2>>n3>>n4;
        if(n1!=n4)
        cout<<n1<<" "<<n4<<endl;
        else
            cout<<n1<<" "<<n3<<endl;
    }
    return 0;
}
