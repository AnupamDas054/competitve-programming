#include<bits/stdc++.h>

using namespace std;
int main()
{

    int arr[1000];
    cout<<"ENTER THE ELEMENT\n";
    int n;
    cin>>n;
    int max1=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max1<arr[i])
            max1=arr[i];
    }
    int expo=1;
    int bucket[10],count1[10];
    while(max1/expo>0)
    {
        for(int i=0;i<10;i++)
            count1[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count1[(arr[i]/expo)%10]++;
    }
    for(int i=1;i<n;i++)
        count1[i]+=count1[i-1];
    for(int i=n-1;i>=0;i--)
    {
        bucket[count1[(arr[i]/expo)%10]-1]=arr[i];
        count1[(arr[i]/expo)%10]--;
    }
    for(int i=0;i<n;i++)
        arr[i]=bucket[i];
    expo*=10;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;



    return 0;
}
