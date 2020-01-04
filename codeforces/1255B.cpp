#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n+2];
        vector<pair<int,int>>v,v1;
        for(int i=0;i<n;i++){
            cin>>arr[i];v.push_back({arr[i],i+1});
        }
        if(m<n || n==2)
        {
            cout<<"-1"<<endl;

        }
        else
        {
            sort(v.begin(),v.end());
            long long cost=0;
            int prev=0,c3=0;
//            for(int i=0;i<n-1;i++)
//            {
//                cost=v[]
//            }
//            if(n%2==1)
//            {
//                cost=cost+(v[n/2].first+prev);
//                v1.push_back({v[n/2].second,c3});
//            }
            for(int i=0;i<n-1;i++)
            {
                cost+=v[i].first+v[i+1].first;
            }
            cost+=v[n-1].first+v[0].first;
            cout<<cost<<endl;
            for(int i=0;i<n-1;i++)
            {
                cout<<v[i].second<<" "<<v[i+1].second<<endl;
            }
            cout<<v[n-1].second<<" "<<v[0].second<<endl;
        }
    }
    return 0;
}
