#include <stdio.h>

void print_array(int* ar, int n) {
    int i;
    printf("The elements of array are: ");
    for (i = 0; i < n - 1; i++) printf("%d ", ar[i]);
    printf("%d\n", ar[n - 1]);
}

void swap(int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void sortpairs(int* a, int size) {
    int i, j;
    int n = size;
    for (i = 1, j = n - 1; i <= n / 2; i += 2, j -= 2) {
        if (i == j) break;
        swap(&a[i], &a[j]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int arr2[] = {1, 2, 3, 7, 8, 9};
    int arr3[] = {1, 2, 4, 5};
    sortpairs(arr, 8);
    print_array(arr, 8);
    sortpairs(arr2, 6);
    print_array(arr2, 6);
    sortpairs(arr3, 4);
    print_array(arr3, 4);

    return 0;
}