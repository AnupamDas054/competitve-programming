#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int a=97;
    while(n!=0)
    {
        for(int i=97;i<(a+k);i++)
        {
            printf("%c",i);
            n--;
            if(n==0)
                break;
        }
    }
    cout<<endl;
}

return 0;
}
