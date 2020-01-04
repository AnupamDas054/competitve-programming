#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,23,3,5,6,31,4,6};
    vector<int> v(arr+1,arr+5);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
