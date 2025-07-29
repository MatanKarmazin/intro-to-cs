#include <stdio.h>
#define SIZE 5

double avgRecu(int *arr, int n) {
    if (n <= 0) {
        return 0;
    }
    double sum = arr[0];
    if (n > 1) {
        sum += avgRecu(arr + 1, n - 1);
    }
    return sum;
}

double avg(int *arr, int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

    int main() {
        int arr[SIZE] = {1, 3, 5, 4, 2};
        // double result = avg(arr, SIZE);
        // printf("%.2lf\n", result);
        double result2 = avgRecu(arr, SIZE);
        printf("%.2lf\n", result2 / SIZE);
        return 0;
    }