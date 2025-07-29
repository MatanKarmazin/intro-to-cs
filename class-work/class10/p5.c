#include <stdio.h>
#define SIZE 7

int fun(int *arr, int n) {
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        

    }
    return -1;
}

int main() {
    int arr1[] = {-3, 8,1,9,15,10,18};
    int result1 = fun(arr1, SIZE);
    printf("result = %d\n", result1);
    return 0;
}

// while (low <= high) {
//         mid = low + (high - low) / 2;
//         if (key == arr[mid]) {
//             while (mid > 0 && arr[mid - 1] == key) {
//                 mid--;
//             }
//             return mid;
//         }
//         if (key > arr[mid]) {
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }