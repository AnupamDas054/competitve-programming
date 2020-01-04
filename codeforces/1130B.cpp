#include<bits/stdc++.h>

using namespace std;
//typedef pair<int,int> pii;
struct x
{
    int x,y;
};
bool cmp(struct x a ,struct x b)
{
       if(a.x==b.x)
         return a.y<b.y;
       else
       return a.x<b.x;
}
int main()
{
    int n;
    cin>>n;
   // vector< pii > v;
    struct x arr[2*n+6]={0};
    int m=2*n;
    for(int i=1;i<=m;i++)
    {
        int k;
        cin>>k;
        arr[i].x=k;
        arr[i].y=i;

    }
    sort(arr+1,arr+m+1,cmp);
//    for(int i=1;i<=m;i++)
//    {
//        cout<<arr[i].x<<" "<<arr[i].y<<endl;
//    }
    int choice1 =1;
    long long int c=0;
    for(int i=1;i<=2*n;i=i+2)
    {
        if(arr[i].y>=choice1)
        {
            c=c+arr[i].y-choice1;
        }
        else
        {
             c=c+choice1-arr[i].y;
        }
        choice1=arr[i].y;
    }
    choice1=1;
    for(int i=2;i<=2*n;i=i+2)
    {
        if(arr[i].y>=choice1)
        {
            c=c+arr[i].y-choice1;
        }
        else
        {
             c=c+choice1-arr[i].y;
        }
        choice1=arr[i].y;
    }
    cout<<c<<endl;
    return 0;
}
