#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int n;
    ll k;
    cin>>n>>k;
    map<ll ,int>m;
    int arr[n+2];
    vector<int>v;
    int mark[300005]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
        if(mark[arr[i]]==0)
        {
            v.push_back(arr[i]);
            mark[arr[i]]=1;
        }
    }
    sort(v.rbegin(),v.rend());
    int s=v.size();
    int slice1=0;
    for(int i=0;i<s;)
    {
        int sign=0;
        if(m[v[i]]==n)
        {
            break;
        }
        int k1=m[v[i]];
        if(k1<=k)
        {
            for(int j=i+1;j<s;j++)
            {
                if(m[[v]==n)
                    break;
                k1+=m[v[j]];
                if(k1>k)
                {
                    i=j-1;
                    sign=1;
                    break;
                }

            }
        }
        if(sign==0)
        {
            i++;
        }

    }


    return 0;
}
