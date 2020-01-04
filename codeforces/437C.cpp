#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c1,c2;
    string s[4];
    vector< pair<int,int > >v;
    for(int i=0;i<4;i++){
        cin>>s[i];
       // cout<<s[i].size()<<endl;
       v.push_back(make_pair(s[i].size()-2,i+1));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++)
       cout<<v[i].first<<endl;
    int k=0;
   if(v[0].first*2<=v[1].first && v[0].first*2<=v[2].first && v[0].first*2<=v[3].first && (v[3].first/v[0].first)!=2)
   {

       k=v[0].second;
   }
   else if(v[3].first>=v[1].first*2 && v[3].first>=v[2].first*2 && v[3].first >=v[0].first*2 && (v[3].first/v[0].first)!=2)
   {

       k=v[3].second;
   }
   else
   {
       k=3;
   }
   if(k==1)
   {
       cout<<"A"<<endl;
   }
    else if(k==2)
   {
       cout<<"B"<<endl;
   }
    else if(k==3)
   {
       cout<<"C"<<endl;
   }
   else
   {
       cout<<"D"<<endl;
   }

}
