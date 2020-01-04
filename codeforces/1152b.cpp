#include<bits/stdc++.h>
using namespace std;
void block1(long int m3)
{
    vector<long int> v,m;
    while (m3 > 0)
    {

        v.push_back(m3 % 2);
        m3 = m3 / 2;

    }

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] == 1)
        {
              m.push_back(i);

        }

    }

    //sort(m.rbegin(),m.rend());
    int k1=m.size();
    cout<<k1*2<<endl;
    for(int i=0;i<k1;i++)
        cout<<m[i]<<" ";
    cout<<endl;

}

int main()
{

    int m3,k5;
    cin>>m3;
    m3=m3+1;
    k5=m3;
    while(m3%2==0)
    {
        m3=m3/2;
    }
    if(m3==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    block1(k5-1);
}
