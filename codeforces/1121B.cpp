#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    map<long long int ,int>m;
    int large=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            m[arr[i]+arr[j]]++;
            if(m[arr[i]+arr[j]]>large)
                large=m[arr[i]+arr[j]];
        }
    }
    cout<<large<<endl;
    return 0;
}
