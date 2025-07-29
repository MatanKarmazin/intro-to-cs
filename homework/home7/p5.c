#include <stdio.h>
#define SIZE 5

int fun(int *arr, int n, int key, int *num1, int *num2) {
    *num1 = -1, *num2 = -1;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] < key) {
                *num1 = arr[i];
                *num2 = arr[j];
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[SIZE] = {1, 6, 2, 4, 3};
    int num1, num2;
    int key = 4;
    int result = fun(arr, SIZE, key, &num1, &num2);
    printf("%d\n", result);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}