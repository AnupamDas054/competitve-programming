#include<bits/stdc++.h>

using namespace std;


bool cmp(int a,int b){

//    int a1=(ceil(a/10)*10-a);
//   int b1=(ceil(b/10)*10-b);
//   if(a1==0 || b1==0)
//          return (ceil(a/10)*10-a) > (ceil(b/10)*10-b) ;
//    if(a1==b1)
//       return a>b;
//
//   return (ceil(a/10)*10-a) < (ceil(b/10)*10-b) ;
return a%10 > b%10;
}

int main()
{
    int n,k;
    cin>>n>>k;

   int arr[n+2];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n,cmp);
 //  for(int i=0;i<n;i++)
    //    cout<<arr[i]<<endl;
    long long int sum=0,sign=0;
   while(k>0){
     sign++;
    for(int i=0;i<n;i++)
    {

       int cur=10-((arr[i])%10);

       if(cur<=k && arr[i]+cur<=100)
       {
           sign=0;
           arr[i]=arr[i]+cur;
           k-=cur;
//           while(1){
//
//           cur=10-((arr[i])%10);
//           if(cur<=k && arr[i]+cur<=100)
//           {
//             arr[i]=arr[i]+cur;
//               k-=cur;
//           }
//           else
//            break;
//           }
       }
    }
    if(sign>2)
        break;
   }

       for(int i=0;i<n;i++)
       {
           sum+=floor(arr[i]/10);
       }


    cout<<sum<<endl;
}
