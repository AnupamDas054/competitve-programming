#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a[4];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]!=a[1])
        {
            a[0]+=1;
        }
        if(a[1]!=a[0] && a[0]<a[1])
            a[1]-=1;
        if(a[2]!=a[1])
        a[2]=a[2]-1,cout<<"co";
        sort(a,a+3);
        cout<<(a[1]-a[0])+(a[2]-a[1])+(a[2]-a[0])<<endl;
    }
    return 0;
}
