#include<bits/stdc++.h>

using namespace std;

int main()
{

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        long long int l,r,low=0,high=0;

        cin>>l>>r;
        l=l-1;
        if(l%2==0)
            low=l/2;
        else
           low=0-(l/2+1);

        if(r%2==0)
            high=r/2;
        else
            high=0-(r/2+1);

        cout<<high-low<<endl;
    }
}
