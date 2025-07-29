#include <stdio.h>

void arrCalc(int *arr, int n, int *min, int *sum, double *avg) {
    int i;
    *min = arr[0], *sum = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; 
        }
        *sum += arr[i];
    }
    *avg = (*sum / (double)n);
}

int main() {
    int min, sum;
    double avg;
    int arr[3] = {1, 3, 3};
    arrCalc(arr, 3, &min, &sum, &avg);
    printf("min = %d\nsum = %d\navg = %.2lf\n", min, sum, avg);
    return 0;
}