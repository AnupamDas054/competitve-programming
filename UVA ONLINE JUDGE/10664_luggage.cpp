#include<bits/stdc++.h>

using namespace std;

int arr[100];
int vis[100][100];
int n;
int knapsack(int i, int w)
{
   if(i==n)
   {
       if(w==0)
        return 1;
       else
        return 0;
   }
   if(w==0) return 1;
   if(vis[i][w]!=-1)
    return vis[i][w];
   int profit1=0,profit2=0;
   if(w-arr[i]>=0)
   {
       profit1=knapsack(i+1,w-arr[i]);
   }
   profit2=knapsack(i+1,w);
   return vis[i][w]=profit1|profit2;
}

int main()
{

    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        memset(vis,-1,sizeof(vis));
        memset(arr,0,sizeof(arr));
        int  j=0;

        int arr[100]={0};
        string s;
        getline(cin,s);
        int sum=0;
       // cout<<s<<endl;
       istringstream iss(s);
       int k;
       while(iss>>k)
       {
           arr[j]=k;
           sum=sum+arr[j];
           j++;
       }
       n=j-1;
       if(sum%2!=0)
       {
           printf("NO\n");
       }
       else
       {
           int k1=sum/2;
           if(knapsack(0,k1)!=1)
           {

               printf("NO\n");
           }
           else
           {
               printf("YES\n");
           }

       }

//        for(int k1=0;k1<j;k1++)
//           cout<<arr[k1]<<endl;
////           //getchar();

    }

    return 0;
}
