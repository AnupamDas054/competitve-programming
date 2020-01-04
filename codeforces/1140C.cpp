#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<int,int>a ,pair<int,int>b)
{
    if(a.second*a.first==b.second*b.first)
    {
        return a.second>b.second;
    }
    else
    return a.first*a.second>b.first*b.second;
}
int main()
{

    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    long long int sum[n+2]={0};
    int m[n+2]={0};
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp);
   // fill(m.begin(), m.end(), 0);
    //fill(sum.begin(), sum.end(), 0);

    for(int i=0;i<n;i++)
    {

        //cout<<v[i].second<<endl
        if(i==0)
        {

            m[i] = v[i].second;

            //cout<<m[i]<<endl;
        }
        else
        {
            if(m[i-1]>v[i].second)
            {
                m[i]=v[i].second;
            }
            else
                m[i]=m[i-1];
        }
    }
  //  for(int i=0;i<n;i++)
       // cout<<m[i]<<endl;

    for(int i=0;i<n;i++)
    {

        if(i==0)
        {
            sum[i]=v[i].first;
        }
        else
        {
            sum[i]=sum[i-1] + v[i].first;
        }
    }
  //  for(int i=0;i<n;i++)
    //cout<<m[i]<<" "<<sum[i]<<endl;
    long long int s=0;
    for(int i=0;i<k;i++)
    {
        long long int m1=sum[i]*m[i];
        if(m1>s)
        {
            s=m1;
        }
    }
    cout<<s<<endl;
    return 0;
}
