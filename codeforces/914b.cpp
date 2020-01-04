#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,k,m=1,k2=0,m1=0;
    cin>>n;
    vector<long long>arr;
    for(i=0;i<n;i++)
    {
        cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.begin()+n);
    long long m3=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
       if(arr[i]==m3)
        m++;
       else
       {
           k2=arr[i];
           break;
       }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k2)
            m1++;
    }
    int sign=0;
    for(int i=0;i<n-1;)
    {
        if(arr[i]==arr[i+1]){
            sign=1;
            i=i+2;
           // cout<<"o";
        }
        else
        {
            sign=0;
            break;
        }
    }
    if(m%2!=0)
    {
        cout<<"Conan"<<endl;
    }
    else{//cout<<m<<" "<<m1<<endl;
          if(m1!=0 && m1%2!=0)
          cout<<"Conan"<<endl;
           else
           {
            if(sign==1)
           cout<<"Agasa"<<endl;
           else
            cout<<"Conan\n";
           }
    }
    return 0;
}
