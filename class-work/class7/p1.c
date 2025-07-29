#include <stdio.h>

void inputArray(int *arr, int n){
    int i;
    printf("enter %d numbers:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

void printArray(int *arr, int n){
    int i;
    printf("Array elements:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    printArray(arr, size);
    return 0;
}