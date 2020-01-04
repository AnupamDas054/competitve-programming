#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long a,b,c;
    cin>>a>>b>>c;
    long long min1=min(a,(min(b,c)));
    a=a-min1;b=b-min1;c=c-min1;
    long long sum=(4*min1);
    if(a==0 && b==0 )
    {
         sum=sum+(c*2);
            cout<<sum<<endl;
            return 0;
    }

    if(b==0 || a==0)
    {

            sum=sum+(c*2)+1;
            cout<<sum<<endl;
            return 0;

    }
    if(a>b)
    {
        sum=sum+(c*2)+2*b+1;
        cout<<sum<<endl;
        return 0;
    }
    else if(a<b)
    {
        sum=sum+(c*2)+2*a+1;
        cout<<sum<<endl;
        return 0;
    }
    else
    {
        sum=sum+(c*2)+2*a;
        cout<<sum<<endl;
        return 0;
    }

    return 0;
}
