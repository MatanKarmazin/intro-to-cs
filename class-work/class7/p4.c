#include <stdio.h>
#define SIZE 6

int fun(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] + arr[i + 1] == arr[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr1[] = {1, 2, 7, 5, 9, 6};
    int arr2[] = {1, 2, 8, 5, 9, 6};
    int result1 = fun(arr1, SIZE);
    int result2 = fun(arr2, SIZE);
    printf("%d\n", result1);
    printf("%d\n", result2);
}
