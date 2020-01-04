#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[200],m[200];
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
        getline(cin,m[i]);
    }
    int n1;
    cin>>n1;
    string s1;
    getchar();
    for(int i=0;i<n1;i++)
    {
        getline(cin,s1);
        for(int j=0;j<n;j++)
         if(s[j]==s1)
         {
             cout<<m[j]<<endl;
             break;
         }
    }
    return 0;
}
