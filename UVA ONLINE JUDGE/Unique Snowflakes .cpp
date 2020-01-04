#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int  n,k;
        cin>>n;
        long long int m=0;
        set<long long int >s;
        for(int i=0;i<n;i++){
            cin>>k;
            if(k!=0)
            s.insert(k);
        }
        cout<<s.size()<<endl;
    }
    return 0;

}
