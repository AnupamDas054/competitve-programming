#include<bits/stdc++.h>

using namespace std;

struct x
{
    int id,v,index;
};
bool cmp(struct x a1, struct x b)
{
    if(a1.v==b.v)
    {
        return a1.index<b.index;
    }
    else
        return a1.v>b.v;
}
int main()
{
    int n;
    cin>>n;
    struct x a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].id>>a[i].v;
        a[i].index=i+1;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].id<<" "<<a[i].v<<endl;
    }


}
