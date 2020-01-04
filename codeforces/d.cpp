#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        while (k%3!=0 && k>0)
            {
            k=k-7;
            }

        if (k<0)
            cout << "NO\n";
        else
         cout << "YES\n";
    }
    return 0;
}
