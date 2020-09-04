// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/809803
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *createNode(int x)
{
    node *tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

void printList(node *l)
{
    node *p = l;
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

node *addElement(node *l, int x)
{
    node *tmp = createNode(x);
    l->next = tmp;
    return tmp;
}

node *addTail(node *l, int x)
{
    node *p = l;
    while(p->next != NULL)
    {
        p = p->next;
    }
    node *tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    p->next = tmp;
    return l;
}

node *getValueAtK(node *l, int k)
{
    node *p = l;
    for(int i = 0; i < k; i++) {
        p = p->next;
    }
    return p;
}

node *removeElement(node *l, int k, int n)
{
    node *p = l;
    node *tmp = getValueAtK(p, k);
    node *res = new node;
    bool flag = true;
    while(p != NULL)
    {
        if(p->data <= tmp->data)
        {
            if(flag) {
                res = createNode(p->data);
                flag = false;
            } else {
                res = addTail(res, p->data);
            }
            
        }
        p = p->next;
    }
    return res;
}

int main()
{
    int n, x, k;
    cin >> n >> x;
    node *l = createNode(x);
    node *p = l;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    cin >> k;
    l = removeElement(l, k, n);
    printList(l);
    return 0;
}