#include <stdio.h>
#define SIZE 8

int funOn2(int *arr, int n, int x, int *a, int *b) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                *a = i;
                *b = j;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 3, 5, 5, 6, 9, 10, 13};
    int x = 13, a, b;
    int result1 = funOn2(arr, SIZE, x, &a, &b);
    result1 ? printf("there is a solution\n")
            : printf("there isn't a solution, a & b are garbage values\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}