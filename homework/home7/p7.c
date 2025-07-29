#include <stdio.h>
#define SIZE 5

int isPaliRecu(int *arr, int size) {
    if (size <= 1) {
        return 1;
    }
    if (arr[0] != arr[size - 1]){
        return 0;
    }
    return isPaliRecu(arr + 1, size - 2);
}

int isPali(int *arr, int size) {
    int i, j;
    for (i = 0, j = size - 1; i < size / 2; i++, j--) {
        if (arr[i] != arr[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[SIZE] = {1, 3, 2, 3, 1};
    // isPali(arr, SIZE) ? printf("The array is palindrome\n")
    //                   : printf("The array is not palindrome\n");
    isPaliRecu(arr, SIZE) ? printf("The array is palindrome\n")
                          : printf("The array is not palindrome\n");
    return 0;
}