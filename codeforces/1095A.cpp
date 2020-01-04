#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;

    int k2=0;
    string s2;
    for(int i=0;i<k;)
    {
       s2=s2+s[i];
       k2++;
       i=i+k2;

    }
    cout<<s2<<endl;
    return 0;
}
