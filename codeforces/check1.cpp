#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX     100000
typedef long long int LL;

int frq[MAX+5];

int main()
{
    int i, t, v, n;
    LL res;
    bool flag;

    scanf("%d", &t);
    while(t--)
    {
        flag = false;
        res = 0;
        memset(frq, 0, sizeof(frq));

        scanf("%d", &n);
        for(i = 1; i <= n; i++){
            scanf("%d", &v);
            frq[v]++;
        }

        for(i = 1; i <= MAX; i++)
        {
            res += (LL) frq[i] * (n - frq[i]);
            if(frq[i] > 1) flag = true;
        }

        printf("%lld\n", res/2 + flag);
    }
    return 0;
}
