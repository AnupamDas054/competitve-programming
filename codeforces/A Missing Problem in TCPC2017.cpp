#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k=0;
        scanf("%d",&n);
        int arr[n+10];
        vector<int>v;
        for(int i=0 ;i<n-1;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(i!=arr[k])
            {
                v.push_back(i);
            }
            else
            {
                k++;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(i!=v.size()-1){
            cout<<v[i]<<" ";}
            else
                cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
