#include <stdio.h>
#define SIZE 9

void inputArray(int *arr, int n){
    printf("Please enter %d values for the array\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

int fun(int *arr, int n){
    int i, max = 0;
    for (i = 0; i < n - 1; i++){
        if (arr[i] + arr[i+1] > max){
            max = arr[i] + arr[i+1];
        }
    }
    return max;
}

int main() {
    int arr[SIZE];
    inputArray(arr, SIZE);
    int result = fun(arr, SIZE);
    printf("the result is: %d\n", result);
    return 0;
}