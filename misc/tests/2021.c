#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort_arr(int arr[], int n) {
    int right, left = -1;
    for (right = 0; right < n; right++) {
        if (arr[right] == 0) {
            left++;
            swap(&arr[right], &arr[left]);
        }
    }
    for (right = left; right < n; right++) {
        if (arr[right] == 1) {
            left++;
            swap(&arr[right], &arr[left]);
        }
    }
}

int main() {
    int arr[] = {0,1,0,0,1,2,1,2,0,2,1,0,0};
    sort_arr (arr, 13);
    int i;
    for (i = 0; i < 13; i++) {
        printf("%d ",arr[i]);
    }
}