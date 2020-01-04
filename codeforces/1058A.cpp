#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,o=0,l=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k==0)
        {
            o++;
        }
        else
        {
            l++;
        }
    }
    if(l==0)
    {
        cout<<"easy"<<endl;
    }
    else
    {
        cout<<"hard"<<endl;
    }
}
