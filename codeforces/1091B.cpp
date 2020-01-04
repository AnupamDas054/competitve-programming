#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    vector< pair<int,int> >v,v1;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
     for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v1.push_back({a,b});
    }
    if(n==1)
    {
        long long int k=(v[0].first+v1[0].first);
        long long int k1=(v[0].second+v1[0].second);
        cout<<k<<" "<<k1<<endl;
        return 0;
    }
    int d=0;

    sort(v1.rbegin(),v1.rend());
//    for(int i=0;i<n;i++)
//    {
//        cout<<v[i].first<<" "<<v[i].second<<endl;
//    }
    sort(v.begin(),v.end());
//     for(int i=0;i<n;i++)
//    {
//        cout<<v1[i].first<<" "<<v1[i].second<<endl;
//    }
   // cout<<k<<" "<<k1<<endl;
   long long int k=(v[0].first+v1[0].first);
    long long int k1=(v[0].second+v1[0].second);
        for(int j=1;j<n;j++)
        {
            if((v[j].first+v1[j].first)==k  && (v[j].second+v1[j].second)==k1)
            {
                if(j==n-1)
                {
                    cout<<k<<" "<<k1<<endl;
                    return 0;
                }
            }
            else
            {
                break;
            }
        }
//    do{
//        long long int k=(v[0].first+v1[0].first);
//        long long int k1=(v[0].second+v1[0].second);
//        for(int j=1;j<n;j++)
//        {
//           // cout<<v1[j].first<<endl;
//            if((v[j].first+v1[j].first)==k  && (v[j].second+v1[j].second)==k1)
//            {
//                if(j==n-1)
//                {
//                    cout<<k<<" "<<k1<<endl;
//                    return 0;
//                }
//            }
//            else
//            {
//                break;
//            }
//        }
//    }while(next_permutation(v1.rbegin(),v1.rend()));
    //cout<<d<<endl;
}
