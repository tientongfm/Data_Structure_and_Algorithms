#include<iostream>
using namespace std;

struct node {
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
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

node *addElement(node *p, int x)
{
    node *tmp = createNode(x);
    p->next = tmp;
    return tmp;
}

node *getElement(node *p, int k)
{
    node *tmp = p;
    // if(k == 0) {
    //     return tmp;
    // } else if (k == n - 1) {
    //     while(tmp->next != NULL) {
    //         tmp = tmp->next;
    //     }
    //     return tmp;
    // } else {
    //     for(int i = 0; i < k; i++) {
    //         tmp = tmp->next;
    //     }
    //     return tmp;
    // }
    for (int i = 0; i < k; i++)
    {
        tmp = tmp->next;
    }
    return tmp;
}

int main()
{
    int n, x;
    cin >> n >> x;
    node *l = createNode(x);
    node *p = l;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    int k;
    cin >> k;
    p = getElement(l, k);
    cout << p->data << endl;
    return 0;
}