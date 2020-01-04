#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n+2]={0},arr1[n+1]={0};
    map<int,int>m;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>arr1[i];
        m[arr1[i]]=1;

    }
     stack<int>s;

    for(int i=1; i<=n; i++)
    {
        if(m[i]==0)
        {
            s.push(i);
        }
    }

    while(!s.empty())
    {
        if(arr1[j]==0)
        {
            if(s.top()!=j)
            {

            }
            else
            {
                s.pop()
            }
        }
        else
        {
            j++;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
}
