#include<bits/stdc++.h>

using namespace std;

struct s
{
    int n1,w,h;
    int  s;
}x[1000005],k;

bool cmp(k a , k b)
{
    return (a.n1 > b.n1) && (a.w < b.w) &&( a.h >b.h) && (a.s<b.s)
}
int main()
{

    int n;
    cin>>n;
    string s1[n+2];
    vector < pair<int,int> >in,we,he,name;

    //int in[n+2],wi[n+2],he[n+2];
  //  vector< pair<int, pair<int , pair<int, pair<int, int> > > >v;

    for(int i=0;i<n;i++)
    {
        cin>>s1[i];
        int k=s1[i].size();
        x[i].s=k;
        cin>>x[i].n1>>x[i].h>>x[i].w;
//        in.push_back({n1,i+1});
//        he.push_back({h,i+1});
//        we.push_back({w,i+1});
//        name.push_back({k,i+1});
     //   v.push_back(make_pair(n1,make_pair(h,make_pair(w,make_pair(k,i+1)))));

    }
    sort(x,x+n,cmp);
    for(int i=0;i<n;i++)
    {
    cout<<x[i].s<<" "<<x[i].h<<endl;
    }

    sort(name.begin(),name.end());
    int  mark[n+2]={-1};
    sort(in.rbegin(),in.rend());
    sort(we.begin(),we.end());
    sort(he.rbegin(),he.rend());


}
