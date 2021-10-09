#include <stdio.h>
#include <stdlib.h>
#define MAX 4

void showInfo(int *A, int *B);

int main()
{
    int A[MAX] = {0, 0, 1, 1};

    int B[MAX] = {0, 1, 0, 1};

    showInfo(A, B);
}

void showInfo(int *A, int *B)
{
    int index, X;

    for (index = 0; index < 4; index++)
    {

        X = (A[index] == 1 && B[index] == 1) ? 0 : 1;

        printf("\n%d PORT NAND %d = %d", A[index], B[index], X);
    }
}
