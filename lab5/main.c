#include <stdio.h>

int main() {
    int a[] = {23,5678,2,564,365,77,443};
    for (int i=0; i<=6; i++) {
        printf("%d ", a[i]);
    }

    int n = 2;
    int C[n][n], A[2][2] = {{1, 1}, {1, 4}}, B[2][2] = {{1, 2}, {4, 1}};
    for(int i=0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    for (int i=0; i<n; i++) {
        printf("\n");
        for (int j=0; j<=1; j++) {
            printf(" %d", C[i][j]);
        }
    }
    return 0;
}