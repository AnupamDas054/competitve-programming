#include<bits/stdc++.h>
using namespace std;
bool cmp(string s1,string s2)
{
    return s1.size()>s2.size();
}
int main()
{
    int n;
    cin>>n;
    int k=(2*n)-2;
    string s[1000],str[1000],s2;
    for(int i=0;i<k;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<k;i++)
    {
        str[i]=s[i];
    }
    sort(s,s+k,cmp);
    //for(int i=0;i<k;i++)
//cout<<s[i]<<endl;
int k1=0,sign=0;
int m1=s[0].size();
int m2=s[1].size();
if(m1==1 && m2==1)
{
    s2=s2+s[0]+s[1];
    sign=1;
    //cout<<s2<<endl;
}
s2=s2+s[0]+s[1][n-2];
//  for(int i=0;i<m1;i++)
//  {
//      k1=0;
//      for(int j=0;j<m2;j++)
//      {
//          if(s[0][i+j]==s[1][j])
//          {
//              k1++;
//              if(k2>=2 && i+j==m1-1)
//              {
//                  s2=s[0];
//                //  cout<<"s2="<<s2<<endl;
//                 // cout<<j<<endl;
//                  for(int k3=j+1;k3<m2;k3++)
//                  {
//                    s2=s2+s[1][k3];
//                  //  cout<<s2<<endl;
//                  }
//              }
//          }
//          else
//            break;
//
//      }
//
//  }

  //cout<<s2<<endl;
// int n5=s2.size();
// if(n5!=n)
// {
//     for(int i=0;i<m2;i++)
//  {
//      k1=0;
//      for(int j=0;j<m1;j++)
//      {
//          if(s[1][i+j]==s[0][j])
//          {
//              k1++;
//              if(i+j==m2-1)
//              {
//                  s2=s[1];
//                //  cout<<"s2="<<s2<<endl;
//                 // cout<<j<<endl;
//                  for(int k3=j+1;k3<m1;k3++)
//                  {
//                    s2=s2+s[0][k3];
//                  //  cout<<s2<<endl;
//                  }
//              }
//          }
//          else
//            break;
//
//      }
//
//
//  }
// }
 //cout<<s2<<endl;
 vector<char>v;
 map< string, int > m;
 map<string,int>m5;
 for(int i=0;i<k;i++)
 {
     string s3=str[i];
     int n2=s3.size();
     int check=0;
     if(m[s3]!=1){
        m[s3]=1;
      //  cout<<"s23"<<s3<<endl;
     for(int j=0;j<n;j++)
     {
         int cnt=0;
         for(int l=0;l<n2;l++)
         {
             if(s2[j+l]==s3[l])
             {
                 cnt++;
                 if(cnt==n2 && j+l==n-1)
                 {
                     v.push_back('S');
                   //  cout<<s3<<" "<<j<<" "<<"s"<<endl;
                   m5[s3]=1;

                     check=1;
                     break;

                 }
                 else if(cnt==n2 && j==0)
                 {
                     v.push_back('P');
                  //   cout<<s3<<" "<<j<<" "<<"P"<<endl;
                     check=1;
                     m5[s3]=2;
                     break;
                 }


             }
         }
         if(check==1)
            break;
     }
     }
     else
     {
        // cout<<s3<<endl;
        if(m5[s3]==2)
         v.push_back('S');
         else
            v.push_back('P');
     }


 }
 int v1=v.size();
 for(int i=0;i<v1;i++)
    cout<<v[i];
 cout<<endl;
    return 0;
 }

