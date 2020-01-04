#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;

        vector< pair<long long,int> >v;

        long long int large=1e9+1,index=0;

        for(int i=0;i<n;i++)
        {
            cin>>m;
            v.push_back({m,i+1});
            if(m<large)
            {
                index=i+1;large=m;
            }
        }

        bool flag=0;

        sort(v.begin(),v.end());


        for(int i=0;i<n;i++)
        {
            if(i+1 != index)
            {
                long long diff=abs(v[i].first-large);
                if(abs(index-i)<=diff)
                {
                    cout<<"YES\n";
                    long long m1=i+1;
                    cout<< min(index,(m1)) <<" "<< max(index,(m1))<<endl;
                    flag=1;
                    break;
                }
            }
        }

        if(flag==0)
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}
