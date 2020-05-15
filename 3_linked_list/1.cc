// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/805177
// Linked List

#include<iostream>
using namespace std;

// Khai bao node
struct node {
    int data;
    node *next;
};

// Tao 1 node
node *createNode(int x)
{
    node *tmp = new node;
    tmp->next = NULL;
    tmp->data = x;
    return tmp;
}

// In cac gia tri trong node
void printList(node *l)
{
    node *p = l;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// Them 1 phan tu vao cuoi danh sach
node *addElement(node *p, int x)
{
    node *tmp = createNode(x);
    p->next = tmp;
    return tmp;
}

int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    node *l = createNode(x);
    node *p = l;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    printList(l);
    return 0;
}