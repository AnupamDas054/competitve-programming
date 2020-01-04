#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    char arr[n+3][n+3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='.')
            {
                if((i+2<n  && j-1>=0 && j+1<n))
                {
                    //cout<<i<<" "<<j<<endl;
                    if(arr[i+1][j-1]=='.' && arr[i+1][j]=='.' && arr[i+1][j+1]=='.' && arr[i+2][j]=='.')
                    {
                        arr[i+1][j-1]='#'; arr[i+1][j]='#';  arr[i+1][j+1]='#' ; arr[i+2][j]='#';arr[i][j]='#';
                    }
                 else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }

                }
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
