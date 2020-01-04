#include<bits/stdc++.h>
using namespace std;
int min(int x, int y) { return (x < y)? x: y; }
int main()
{
    double h,m;
    char ch;
    while(cin>>h)
    {
        cin>>ch;
        cin>>m;
        if(h==0 && m==0)
            break;
        if(h==12)
        h=0;
        if(m==60)
            m=0;
        double h_angle=0.5*((h*60)+m);
        double m_angle=m*6;
        double angle(abs(h_angle-m_angle));
        angle = min(360-angle, angle);
        printf("%.3lf\n",angle);


    }
}
