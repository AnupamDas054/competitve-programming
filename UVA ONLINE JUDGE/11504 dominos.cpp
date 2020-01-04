#include<bits/stdc++.h>
using namespace std;
struct x
{
    int s,e;
};
bool cmp(struct x a,struct x b)
{
   return a.s<b.s;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        struct x arr[m+3];
        for(int j=0;j<m;j++)
        {
            cin>>arr[j].s>>arr[j].e;
        }
        sort(arr,arr+m,cmp);
        for(int k=0;k<m;k++)
            cout<<arr[k].s<<" "<<arr[k].e<<endl;
    }
    return 0;
}
