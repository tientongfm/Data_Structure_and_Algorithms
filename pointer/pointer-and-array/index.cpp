#include<stdio.h>
int main()
{
    int A[] = {2, 3, 6, 7, 10};
    for(int i = 0; i < 5; i++)
    {
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A+i));
    }
}