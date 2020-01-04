#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    cout<<"YES\n";
    char arr[5][n+2];
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]='.';
//            if((i==1 && j==1) || (i==1 && j==n) || (i==n && j==1 ) || (i==n && j==n))
//                arr[i][j]='#';
        }
    }
    int sign=0,sign2=0;
    if(k%2!=0)
    {
        sign2=1;
        k--;
    }
        if(k>=2){
        for(int j=2;j<=n/2;j++)
        {
            arr[2][j]='#';
            arr[2][n-j+1]='#';
            k=k-2;
            if(k==0)
            {
                sign=1;
                break;

            }
        }
        }
        if(k>=2){
        for(int j=2;j<=n/2;j++)
        {
            arr[3][j]='#';
            arr[3][n-j+1]='#';
            k=k-2;
            if(k==0)
            {
                sign=1;
                break;

            }
        }
        }
        if(k>=1){
        if(sign==0){
            arr[2][n/2+1]='#';
            k--;
            if(k==0){
                sign=1;
            }
        }
        }
         if(k>=1){
         if(sign==0){
            arr[3][n/2+1]='#';
            k--;
            if(k==0){
                sign=1;

            }

        }
         }
         if(sign2==1){

           if( arr[2][n/2+1]='#'){
                arr[2][n/2+1]='#';
                sign2=0;
           }

        }
        if(sign2==1){

           if( arr[3][n/2+1]='#'){

            arr[2][n/2+1]='#';

           }

        }

        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }

        return 0;

}
