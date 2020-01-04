#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        int n,m;
        cin>>n>>m;
        long long int arr[n+3];
        int oddcnt=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            oddcnt+=(arr[j]%2);
        }
        if(oddcnt < m )
        {
            cout<<"NO\n";
        }

        else

        {
            if((oddcnt-m+1)%2==0)
            {
                cout<<"NO\n";
            }
            else{
            cout<<"YES\n";
            for(int j=0;j<n;j++)
            {
                if(m==1) break;
                if(arr[j]%2!=0)
                {
                    cout<<j+1<<endl;
                    m--;
                }
            }
            cout<<n<<endl;
            }
        }






    }
}
