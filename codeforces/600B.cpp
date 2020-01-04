#include<bits/stdc++.h>
using namespace std;

int binary_search1(long long arr[], long long int key,long int a)
{
    int l=0,h=a,mid;
    int index=-1;
    while(l<h)
    {
         mid=(l+h)/2;
        if(arr[mid]==key)
        {
            index=mid;
            l=mid+1;
        }
        else if(arr[mid]>key)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(index>=0)

    return index;
    else
        return mid;
}


int main(){

long long int a,b;
cin>>a>>b;
long long int arr[a+1];
vector<long long int>v;
for(int i=0;i<a;i++){
    cin>>arr[i];
    v.push_back(arr[i]);
}

sort(v.begin(),v.end());

for(int i=0;i<b;i++)
{
    long long int k;
    cin>>k;
    auto it= upper_bound(v.begin(),v.end(),k)-v.begin();
    cout<<it<<" ";


}
cout<<endl;













return 0;
}
