#include<bits/stdc++.h>
using namespace std;
int arr1[200005];
struct info
{
    int prop,sum;

}tree[200005*3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].sum = 0;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
}

void update(int node,int b,int e,int i,int j,int x)
{
    if(i>e || j<b)
        return ;
    if(b>=i && e<=j)
    {
        tree[node].sum+=((e-b+1)*x);
        tree[node].prop+=x;
        return;
    }
     int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}
int query(int node, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1); //সাম এর সাথে যোগ হবে সেই রেঞ্জের সাথে অতিরিক্ত যত যোগ করতে বলেছে সেটা

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j, carry + tree[node].prop); //প্রপাগেট ভ্যালু বয়ে নিয়ে যাচ্ছে carry ভ্যারিয়েবল
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}
int main()
{

    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    init(1,1,n);
    vector<pair<int,int> >v,v1;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v1.push_back({a,b});
        update(1,1,n,a,b,1);

    }

    for(int i=1;i<=n;i++){

     int m1=query(1,1,n,i,i);
     v.push_back({m1,i});

    }
    sort(v.rbegin(),v.rend());
    int s[n+1]={0};
    int cum[n+1]={0};
    for(int i=0;i<n;i++)
    {
        int k1=v[i].second;
        s[k1]=arr[n-i];
      //  cout<<k1<<" "<<s[k1]<<endl;
      //  cum[k1]=cum[k1-1]+s[k1];
    }
    for(int i=1;i<=n;i++)
        cum[i]=cum[i-1]+s[i];
    long long int sum1=0;
    for(int i=0;i<m;i++)
    {
        int j=v1[i].first;int j1=v1[i].second;
        sum1+=cum[j1]-cum[j-1];
    }
    cout<<sum1<<endl;
}
