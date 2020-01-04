#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-'){
            if(k1>0)
                k1--;
        }
        else
            k1++;
    }
    cout<<k1<<endl;

    return 0;
}
