#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n,k,m;

    vector<long>vec;

    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>m;
        vec.push_back(m);

    }
    if(k==0)
    {
        if(n==1 && vec[0]>1)
        {
        cout<<"1"<<endl;
        return 0;
        }
        else if(n>=2 && vec[0]<=vec[1])
        {
            cout<<vec[0]-1<<endl;
            return 0;
        }
        else
        {
        cout<<"-1"<<endl;
        return 0;
        }
    }
    else if(n==1 && k==1)
    {
       cout<<vec[0]<<endl;
       return 0;
    }
    sort(vec.begin(),vec.end());

    long k1=vec[k-1];
    if(k==n)
    {
        cout<<vec[n-1]<<endl;
    }
    else if(k1<vec[k])
    {
        cout<<k1<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
