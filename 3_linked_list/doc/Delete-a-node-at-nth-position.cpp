#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int data, int n)
{
    // Tạo 1 node mới
    Node* tmp1 = new Node;
    tmp1->data = data;
    tmp1->next = NULL;
    // Nếu chèn vào vị trí đầu tiên
    if(n == 1) {
        tmp1->next = head;
        head = tmp1;
        return;
    }
    Node* tmp2 = head;   // Tạo node mới = node đầu tiên trong list
    for(int i = 0; i < n - 2; i++)
    {
        // Con trỏ sẽ chạy đến vị trí (n-1). Ví dụ cần chèn ở vị trí thứ 3. Thì con trỏ sẽ chạy đến vị trí thứ 2
        // Bắt đầu từ node thứ 3 mới vào. Vì có node đầu tiên rồi nếu ở vị trí thứ 2 thì tìm đươc luôn vị trí
        tmp2 = tmp2->next;
    }
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
}

void Delete(int n)
{
    Node* tmp = head;
    if(n == 1) {
        head = tmp->next;
        free(tmp);
        return;
    }
    for(int i = 0; i < n - 2; i++) {
        tmp = tmp->next;
        if(tmp->next == NULL) {
            printf("Vị trí cần xóa không có trong danh sách\n");
            return;
        }
    }
    // Con trỏ sẽ chạy đến vị trí (n-1). Ví dụ cần xóa ở vị trí thứ 3. Thì con trỏ sẽ chạy đến vị trí thứ 2
    Node* tmp2 = tmp->next; // Node cần xóa
    tmp->next = tmp2->next;
    free(tmp2);
}

void Print(Node *head)
{
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    int n;
    head = NULL;
    Insert(2, 1);
    Insert(5, 2);
    Insert(3, 2);
    Insert(9, 1);
    Insert(20, 3);
    Insert(17, 4);
    Print(head);
    printf("\nNhap vi tri xoa: ");
    scanf("%d", &n);
    Delete(n);
    printf("Danh sach sau khi xoa la: ");
    Print(head);
    printf("\n");
    return 0;   
}