#include<bits/stdc++.h>
using namespace std;
int n;
int c[10005];
void call()
{
    cout<<"TAK\n";
    for(int i=1;i<=n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int m;
    cin>>n>>m;
    int arr[n+13][m+13];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum^(arr[i][1]);
        c[i]=1;
    }
    if(sum!=0)
    {
        call();
        return 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=2;j<=m;j++)
        {
           if(arr[i][j]!=arr[i][1])
           {
               c[i]=j;
               call();
               return 0;
           }
        }
    }
    cout<<"NIE"<<endl;


}
