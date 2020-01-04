#include<bits/stdc++.h>


using namespace std;

int main()
{

    string s;
    cin>>s;
    int k=s.size();
    int count=0;
    for(int i=0;i<k-1;)
    {
        if(s[i]==s[i+1])
        {
            count++;
            i=i+2;
        }
        else
        {
            i++;
        }
    }
    if(count%2!=0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
