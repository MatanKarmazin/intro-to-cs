#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

// int convert(int decimal) {
//     if (decimal <= 1)
//         return decimal;
//     return convert(decimal / 2) * 10 + decimal % 2;
// }

// int dx(int n) {
//     if (n <= 1) return n;
//     return dx(n / 2) * 10 + n % 2;
// }

// int main() {
//     printf("%d\n", convert(17));
//     // printBinRec(10);
//     printf("\n");
// }

// void rec(int *a, int n, int key) {
//     if (n == 0) return;
//     if ((a[0] + a[n - 1]) % key == 0) printf("%d ", a[0]);
//     rec(a+1, n-2, key);
// }

// int main() {
//     int a[] = {2,13,3,10,8,1};
//     rec(a, 6, 3);
//     printf("\n");
// }

int *newArray(int *a, int nA, int *b, int nB, int *c, int nC) {
    int i, j, k = 0;
    int *d = (int *)malloc((nA + nB) * sizeof(int));
    assert(d);
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nB; j++) {
            if (b[j] == a[i]) {
                d[k++] = b[j];
                break;
            }
        }
    }
    int nD = k;
    for (i = 0; i < nD; i++) {
        for (j = 0; j < nC; j++) {
            if (c[j] == d[i]) {
                d[nD - 1] = d[i];
                k--;
                break;
            }
        }
    }
    int *dNew;
    dNew = (int *)realloc(d, k * sizeof(int));
    assert(dNew);
    return dNew;
}

int main() {
    int a[] = {2, 13, 3, 10, 8, 1};
    int b[] = {4, 2, 13, 88, 1, 10, 8};
    int c[] = {12, 1, 10, 14};
    int nA = 6, nB = 7, nC = 5;
    int *d = newArray(a, nA, b, nB, c, nC);
    int i;
    for (i = 0; i < 3; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
    free(d);
}