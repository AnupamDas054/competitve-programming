#include<bits/stdc++.h>

using namespace std;

int main()
{

    int q;
    cin>>q;
    while(q--)
    {
        long long int arr[4];
        long long total1=0,total=0;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            total=total+(arr[i]/2);
            total1=total1+(arr[i]%2);
        }
        cout<<total+(total1/2)<<endl;

    }
    return 0;
}
