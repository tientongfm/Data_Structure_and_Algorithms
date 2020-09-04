#include<stdio.h>

int Sum(int A[])
{
    int size = sizeof(A)/sizeof(A[0]);
    printf("Size of A in SUM = %d", sizeof(A));
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
    printf("Size of A = %d", sizeof(A));
    int total = Sum(A);
    printf("Tong la: %d\n", total);
    return 0;
}