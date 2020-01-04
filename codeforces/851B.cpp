#include<bits/stdc++.h>

using namespace std;

int main()
{
    double ax,bx,cx,ay,by,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    double k=sqrt(pow((bx-ax),2)+pow((by-ay),2));
    double k1=sqrt(pow((cx-bx),2)+pow((cy-by),2));
    /*if(k==k1 &&  !((bx-ax)==(cx-bx) && (by-ay)==(cy-by)))
    {
        cout<<"Yes"<<endl;
    }*/
    if(k!=k1 || ((ax-bx)==(bx-cx)) && ((ay-by )==( by-cy)))
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }

}
