#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double a,b,c;
    int i=1;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        cin>>a>>b>>c;
        if(n==1)
        {
            cout<<"Case "<<i<<": ";
          double acc=((b-a)/c);
          printf("%.3lf ",((a*c)+(0.500*acc*(c*c))));
          printf("%.3lf\n",(acc));
        }
        else if(n==2)
        {
            cout<<"Case "<<i<<": ";
            double s=((b*b-a*a)/(2*c));
            double t=(b-a)/c;
            printf("%.3lf %.3lf\n",s,t);
        }
        else if(n==3)
        {
            cout<<"Case "<<i<<": ";
            double v=sqrt((a*a)+(2*b*c));
            double t=(v-a)/b;
            printf("%.3lf %.3lf\n",v,t);
        }
        else{
                cout<<"Case "<<i<<": ";
            double u=sqrt(a*a -(2*b*c));
            double t=(a-u)/b;
            printf("%.3lf %.3lf\n",u,t);
        }
        i++;
    }
}
