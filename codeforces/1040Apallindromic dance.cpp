#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int choose=-1;
    int math=0;
    if(a<b)
        choose=a;
    else
        choose=b;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

        for(int i=0;i<n/2;i++)
        {
            if(arr[i]==arr[n-i-1] && arr[i]!=2)
            {
                continue;
            }
            else if(arr[i]==0 && arr[n-i-1]==2)
            {
                math=math+(a);
            }
            else if(arr[i]==0 && arr[n-i-1]==1)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            else if(arr[i]==1 && arr[n-i-1]==0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            else if(arr[i]==2 && arr[n-i-1]==0)
            {
                math=math+(a);
            }
            else if(arr[i]==2 && arr[n-i-1]==1)
            {
                math=math+(b);
            }
            else if(arr[i]==1 && arr[n-i-1]==2)
            {
                math=math+(b);
            }
            else if(arr[i]==2 && arr[n-i-1]==2)
            {
                math=math +(choose*2);
            }

        }
        if(n%2==0)
        {
            cout<<math<<endl;
        }
        else{
            if(arr[(n/2)]==2)
            {
                cout<<math+choose<<endl;
            }
            else{
                cout<<math<<endl;
            }
        }

}
