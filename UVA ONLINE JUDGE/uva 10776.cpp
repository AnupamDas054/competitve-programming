#include<bits/stdc++.h>
using namespace std;
void subset(int i)
{
    subset(i+1);
}
int main()
{
    string s;
    while(cin>>s)
    {
        int k;
        cin>>k;
        subset(0);
    }
}
