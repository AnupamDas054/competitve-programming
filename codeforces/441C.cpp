#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n,m,k;
        cin>>n>>m>>k;
        int n1=n*m;
        if(k==1)
        {
         cout<<n1<<" ";
         static int r=1,c=1;
            int sign=0;

                for(int j=0; j<n1; j++)
                {
                    if(sign==1)
                    {
                        cout<<r<<" "<<c<<" ";

                        if(c==1)
                        {
                            r++;
                            sign=0;
                        }
                        else{

                        r=r;
                        c--;
                        }
                        continue;
                    }
                    else{
                    if(r==1 && c==1)
                    {
                        cout<<1<<" "<<1<<" ";
                        c++;
                    }
                    else if(r>=1 && r<=n && c>=1&& c<=m)
                    {
                        cout<<r<<" "<<c<<" ";
                        if(c==m)
                        {
                            r++;
                            c=c;
                            sign=1;
                        }
                        else
                        {
                            c++;
                        }
                    }
                }
                }
                cout<<endl;
        }
        else
        {
            int m1=0;
            static int r=1,c=1;
            int sign=0;
            for(int i=1; i<=k; i++)
            {

                if(i==k)
                {
                    m1=(n*m)-(2*(k-1));
                    cout<<m1<<" ";
                }
                else
                {
                m1=2;
                cout<<2<<" ";
                }
                for(int j=0; j<m1; j++)
                {
                    if(sign==1)
                    {
                        cout<<r<<" "<<c<<" ";

                        if(c==1)
                        {
                            r++;
                            sign=0;
                        }
                        else{

                        r=r;
                        c--;
                        }
                        continue;
                    }
                    else{
                    if(r==1 && c==1)
                    {
                        cout<<1<<" "<<1<<" ";
                        c++;
                    }
                    else if(r>=1 && r<=n && c>=1&& c<=m)
                    {
                        cout<<r<<" "<<c<<" ";
                        if(c==m)
                        {
                            r++;
                            c=c;
                            sign=1;
                        }
                        else
                        {
                            c++;
                        }
                    }
                }
                }
                cout<<endl;
            }
        }

    return 0;
}
