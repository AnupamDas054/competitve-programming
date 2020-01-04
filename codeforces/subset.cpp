#include<bits/stdc++.h>
using namespace std;

int n;
vector<char>v;
char arr[100];

void subset(int i)
{
   if(i==n){
    cout<<"{";
    for(int i=0; i<v.size(); i++)
    cout<<v[i];
    cout<<"}";
   cout<<endl;
    return ;
   }
   subset(i+1);
   v.push_back(arr[i]);
   subset(i+1);
   v.pop_back();
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    subset(0);
}
