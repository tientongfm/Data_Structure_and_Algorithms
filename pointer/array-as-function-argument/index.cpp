#include<stdio.h>

int Sum(int A[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {2, 3, 6, 7, 10};
    printf("Address of A: %d\n", &A);
    printf("Address of A: %d\n", &A[0]);
    int size = sizeof(A)/sizeof(A[0]);
    int total = Sum(A, size);
    printf("Tong la: %d\n", total);
    return 0;
}