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

node *convertList(node *l, int a, int b)
{
    node *p = l;
    while(p != NULL)
    {
        if(p->data == a) {
            p->data = b;
        }
        p = p->next;
    }
    return l;
}

int main()
{
    int n, x, a, b;
    cin >> n;
    cin >> x;
    node *l = createNode(x);
    node *p = l;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    cin >> a >> b;
    l = convertList(l, a, b);
    printList(l);
    return 0;
}