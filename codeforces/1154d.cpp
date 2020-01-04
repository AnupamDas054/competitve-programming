#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ma=a,mb=b;
    int arr[n+3];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)
        {
             if(ma>0)
            {
                if(mb+1<=b)
              {
              ans++;
              mb++;
              ma--;
             // cout<<"block1"<<endl;
              }
             else if(mb>0)
            {
                mb--;
                ans++;
               //  cout<<"block2"<<endl;
            }
               else{
                    ma--;
                    ans++;
                 //    cout<<"block3"<<endl;
               }
            }

          else{
            if(mb>0)
            {
                mb--;
                ans++;
                 //cout<<"block2"<<endl;
            }
            else
            {
                break;
            }

          }
        }
        else
        {
            if(mb>0)
            {
                mb--;
                ans++;
                // cout<<"block4"<<endl;
            }
            else if(ma>0)
            {
                ma--;
                ans++;
                // cout<<"block5"<<endl;
            }
            else
            {
                break;
            }

        }

    }
    cout<<ans<<endl;
    return 0;

}
