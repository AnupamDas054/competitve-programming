#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int m=0,r=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k==0)
        {

        }
        else if(k<0)
        {
            m++;
        }
        else
        {
            r++;
        }
    }

   // cout<<ceil((double)n/2)<<endl;
    if(r>=ceil((double)n/2))
        {
            cout<<"1\n";
            return 0;
        }
    if(m>r)
    {
        if(m>=ceil((double)n/2))
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
    else
    {
         if(r>=ceil((double)n/2))
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
}
