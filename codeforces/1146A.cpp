#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int k=s.size();
    int cnt=0;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='a')
            cnt++;
    }
    if((cnt)>k/2)

        cout<<k<<endl;
    else
    cout<<cnt*2-1<<endl;
    return 0;
}
