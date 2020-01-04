#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    ll arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // s.insert(k);
    }
   // int l=s.size();
   ll c=0;
   ll k=*max_element(arr,arr+n);
   ll k1=*min_element(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k1 && arr[i]<k)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
