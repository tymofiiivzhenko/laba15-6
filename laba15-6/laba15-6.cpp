#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, min, max, N;

    printf("Enter the size of the massif: ");
    scanf("%d", &N);

    int* A = (int*)malloc(N * sizeof(int));

    printf("Enter the elements of the massif:\n");
    for (i = 0; i < N; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

   min = A[0];
   max = A[0];

    for (i = 1; i < N; ++i) {
        if (A[i] < min) {
            min = A[i];
        }
        if (A[i] > max) {
            max = A[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    free(A);

    return 420;
}
