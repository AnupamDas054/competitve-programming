
#include<bits/stdc++.h>

using namespace std;

int sign=0;
struct node {
    bool endmark;
    node* next[26 + 1];
    node()
    {
        endmark = false;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
} * root;
void insert(char* str, int len)
{
    node* curr = root;
    if(curr->endmark==true)
            sign=1;
    for (int i = 0; i < len; i++) {
        int id = str[i] - '0';
        if(curr->endmark==true)
            sign=1;
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        else
        {
            if(i==len-1)
                sign=1;
        }
        curr = curr->next[id];
    }
    curr->endmark = true;
}
bool search(char* str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - '0';
        if (curr->next[id] == NULL)
            return false;
        curr = curr->next[id];
    }
    return curr->endmark;
}
void del(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}
int main()
{

    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
    root = new node();
    sign=0;
    int num_word;
    cin >> num_word;
    for (int i = 1; i <= num_word; i++) {
        char str[50];
        scanf("%s", str);
        insert(str, strlen(str));
    }
    if(sign==1)
    {
        printf("NO\n",j);
    }
    else
    {
        printf("YES\n",j);
    }
    del(root); //ট্রাইটা ধ্বংস করে দিলাম

    }


    return 0;

}

