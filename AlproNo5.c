#include <stdio.h>

void findCommonElements(int A[], int B[], int C[], int sizeA, int sizeB, int sizeC) {
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB && k < sizeC) {
        if (A[i] == B[j] && B[j] == C[k]) {
            printf("%d ", A[i]);
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 5, 7, 8, 9};
    int C[] = {1, 3, 5, 6, 9};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int sizeC = sizeof(C) / sizeof(C[0]);

    printf("Common Elements: ");
    findCommonElements(A, B, C, sizeA, sizeB, sizeC);

    return 0;
}
