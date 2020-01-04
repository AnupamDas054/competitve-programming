#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    multiset<int>s;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        s.insert(k);
    }
    for(int i=0;i<n;i++)
    {
         auto it=s.lower_bound(n-arr[i]);
         if(it==s.end())
            it=s.begin();
         cout<<(arr[i]+(*it))%n<<" ";
         s.erase(it);
    }
    cout<<endl;
    return 0;
}
