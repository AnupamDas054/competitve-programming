#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int m;
    vector<int> v, v1;
    int sign=0,sign1=0,sign2=0;
    int arr[100000];
    for(int i=0 ;i<k;i++)
    {
       cin>>arr[i];
       if(arr[i]>0)
       {
           sign=1;
           cout<<arr[i]<<" ";
       }
       if(arr[i]<0)
       {
           sign1=1;
           if(k==1)
           {
               cout<<arr[0]<<endl;
               return 0;
           }
           v.push_back(abs(arr[i]));
       }
       if(arr[i]==0)
       {
           sign2==1;
           v1.push_back(0);
       }
    }
    int k2=v.size();
    if(sign==0 && sign1==0)
    {
        cout<<0<<" ";
        cout<<endl;
        return 0;
    }
    if(k==2)
    {
            if((arr[0]<0 && arr[1]==0) || (arr[0]==0 && arr[1]<0)){
            cout<<"0"<<endl;
            return 0;}

    }

    if(k2>=2){

    sort(v.rbegin(),v.rend());

    int j=0,k1=1;

    if(k2%2!=0)
      k2--;

    while(k2%2==0 && k2!=0)
    {
        k2=k2-2;
        cout<<"-"<<v[j]<<" "<<"-"<<v[k1]<<" ";
        j=j+2;
        k1=k1+2;
    }
    }
     cout<<endl;

}

