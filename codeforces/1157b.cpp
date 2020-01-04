#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[12];
    for(int i=1;i<=9;i++)
    {
        cin>>arr[i];
    }
    int m=0,mx=INT_MIN,start=-1,end1=-1,start1=-1,sign=0;

    for(int i=0;i<n;i++)
    {
        int k=s[i]-'0';
        if(k<arr[k]){
            sign=1;
            if(m==0)
            {
                start=i;
            }
             m++;
             if(m>mx && i==n-1 ){
               start1=start;
             //  cout<<start1<<endl;
               end1=i;
               mx=m;
               m=0;
            start=0;
            break;
            }

        }
        else
        {
            if(m>mx && sign==1){
               start1=start;
               end1=i-1;
               mx=m;
               m=0;
            start=0;
            break;

            }
        }
    }
  //  cout<<m<<endl;
    if(start1!=-1 && end1!=-1 ){
    for(int i=start1;i<=end1;i++)
    {
        int k=s[i]-'0';
        s[i]=arr[k]+'0';
    }

    }
    if(m==n)
    {
     for(int i=0;i<n;i++)
    {
        int k=s[i]-'0';
        s[i]=arr[k]+'0';
    }
    }
    cout<<s<<endl;
}
