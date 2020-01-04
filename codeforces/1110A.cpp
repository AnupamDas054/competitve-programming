#include<bits/stdc++.h>

using namespace std;
long long int mod(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return mod(x*x,n/2);
    else                             //n is odd
        return x*mod(x*x,(n-1)/2);

}
int main()
{

    int a,b;
    cin>>a>>b;
    int arr[b+1];
    for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }
    if(a%2!=0)
    {
        int k1=b-1;
        int odd=0,even=0;
        for(int i=0;i<b;i++)
        {

            long long int k=arr[i]*mod(a,k1--);
            cout<<k1<<endl;

            if(k%2!=0)
                odd++;
            else
                even++;

        }
//        if(arr[b-1]%2!=0)
//        {
//            odd++;
//        }
//        else
//            even++;
            //cout<<odd<<endl;
        if(odd%2==0)
        {
            cout<<"even\n";
        }
        else
            cout<<"odd\n";
    }
    else
    {
        if(arr[b-1]%2!=0)
        {
            cout<<"odd"<<endl;
        }
        else
            cout<<"even\n";

    }
    return 0;

}
