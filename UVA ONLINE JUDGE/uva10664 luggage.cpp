#include<bits/stdc++.h>
using namespace std;
int k;
vector<int>v;
int mem[500][100];
int dp(int r ,int c)
{
    if(mem[r][c]!=-1) return mem[r][c];
     int m=0,t;
    for(int i=c;i<v.size();i++)
    {
        if(v[i]<=r)
        {
            t=v[i]+dp(r-v[i],i+1);

        if(m<t)
            m=t;
        }
    }
    mem[r][c]=m;
    return mem[r][c];
}
int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        memset(mem,-1,sizeof(mem));
        vector<int>v;
        int sum=0;
        k=0;
        int n;
        string s;
        getline(cin,s);
        istringstream ss(s);
        while(ss>>n)
        {
         v.push_back(n);
       //  cout<<n<<endl;
         sum=sum+n;
        }
        if(sum%2!=0)
        {
            cout<<"NO\n";
        }
        else if(dp(sum/2,0)==sum/2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

       v.clear();
       //memset(mem,-1,sizeof(mem));
    }
    return 0;
}
