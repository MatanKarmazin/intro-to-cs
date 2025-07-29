#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int *fun(int *arr, int n, int isEven, int *fowo) {
    if (isEven == 1) {
        int i;
        int counterEven = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                counterEven++;
            }
        }
        int *evenArray = (int *)malloc(counterEven * sizeof(int));
        assert(evenArray);
        int evenIndex = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                evenArray[evenIndex++] = arr[i];
            }
        }
        *fowo = counterEven;
        return evenArray;
    } else {
        int i;
        int counterOdd = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                counterOdd++;
            }
        }
        int *oddArray = (int *)malloc(counterOdd * sizeof(int));
        assert(oddArray);
        int oddIndex = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                oddArray[oddIndex++] = arr[i];
            }
        }
        *fowo = counterOdd;
        return oddArray;
    }
}

int main() {
    int isEven = 0, fowo;
    int arr[] = {1, 8, 3, 6, 11};
    int *newPtr = fun(arr, SIZE, isEven, &fowo);
    printf("fowo = %d\n", fowo);
    int i;
    for (i = 0; i < fowo; i++) {
        printf("%d ", newPtr[i]);
    }
    printf("\n");
    free(newPtr);
    return 0;
}