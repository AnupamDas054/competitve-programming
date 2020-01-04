#include<bits/stdc++.h>

using namespace std;
#define m 10000000
int marked[m]={0};
vector<int >v;
int n,k,m2=0;
void precal()
{
    v.push_back(2);
    for(int i=3;i*i<=m;i+=2)
    {
       // cout<<i<<endl;
        if(marked[i]==0){
        //cout<<i<<endl;
          if(i>1120)
            return ;
            v.push_back(i);
        for(int j=i*i ;j<=m ;j+=i+i){
           //cout<<j<<endl;
           marked[j]=1;
        }
        }
    }
}
long long int sum(int i, int n2, int state)
{

    if(n2==0 ){
        if(state==k)
        return 1;
        else
            return 0;
    }
    if(state==k)
    {
        if(n2==0)
            return 1;
        else
            return 0;
    }
    if(i==m2)
        return  0;
    int c1=0,c2=0;
    if(n2-v[i]>=0 && state<=k)
        c1=sum(i+1,n2-v[i],state);
       c2=sum(i+1,v[i],state+1);
    return c1+c2;

}
int main()
{

    precal();
    m2=v.size();
    //cout<<m2<<endl;
  // for(int i=0;i<v.size();i++)
     //   cout<<v[i]<<endl;
     while(scanf("%d%d",&n,&k)==2)
     {
         if(n==0 && k==0)
            break;
        int n1=n;
         cout<<sum(0,n1,0);
     }

    return 0;
}
