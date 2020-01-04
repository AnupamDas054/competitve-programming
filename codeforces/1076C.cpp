#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        float d;
        cin>>d;
         float x=(d*d)-(4*d);
        if(x<0)
        {
            cout<<"N"<<endl;
            continue;
        }

        cout<<"Y ";
        printf("%.9f %.9f\n",(sqrt(x)+d)/2,d-((sqrt(x)+d)/2));
    }
    return 0;
}
