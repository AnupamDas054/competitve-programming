#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100];
long long int call(int i, long long int p)
{
    if(i>2n)
        return 1;
    int ans1=0,ans2=0;
    if(p*arr[i]>=p)
        ans1=call(i+1,p*arr[i]);
    ans2=ans2+call(i+1,p);
    return max(ans1,ans2);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<call(0,0)<<endl;
    return 0;

}

