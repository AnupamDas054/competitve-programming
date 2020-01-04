#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(i=0;i<n+2;)
    {
        i=i+d;

        if(k<n)
        {
            i=i+v[k]-1;
            k++;
            if(i==n+2)
            {
                flag=1;
                break;
            }
        }
        v1.push_back(i);

    }
    return 0;
}

