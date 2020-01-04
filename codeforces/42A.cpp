#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;double v2;
    cin>>n>>v2;
    double k,sum=0;
    vector<double>v,v1;
    for(int i=0;i<n;i++)
    {
       cin>>k;
       v.push_back(k);
    }
    for(int i=0;i<n;i++)
    {

        cin>>k;
        v1.push_back(k);
    }
    double max1=INT_MAX;
    for(int i=0;i<n;i++)
    {
        double l;
        l=v1[i]/v[i];
        if(l<max1)
        {
            max1=l;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]*max1<v1[i])
        {
            sum+=v[i]*max1;
        }
        else
            sum+=v1[i];
    }
    //cout<<sum<<endl;
    if(sum>v2)
    {
        printf("%.6lf\n",v2);
    }
    else
        printf("%.6lf\n",sum);

}
