#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return gcd(num2, num1 % num2);
}

int abs(int a) {
    if (a < 0) {
        a = (-1) * a;
    }
    return a;
}

int ex1(int a, int b) {
    if (a < 0) a = (-1) * a;
    if (b < 0) b = (-1) * b;
    int d = gcd(a, b);
    return (a * b) / d;
}

int ex2(char *str) {
    int i, temp, count[26] = {0};
    for (i = 1; str[i] != '\0'; i++) {
        temp = (str[i] - str[i - 1]);
        count[abs(temp)]++;
    }
    int max = 0;
    for (i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = i;
        }
    }
    return max;
}

int ex3(int num) {
    if (num == 0) {
        return 0;
    }
    if (num % 2 == 1) {
        return 1 + ex3(num / 2);
    } else
        return ex3(num / 2);
}

int ex4(int key, int *arr, int size) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key || arr[mid + 1] == key) {
            return 1;
        }
        if (key > arr[mid] && key > arr[mid + 1]) {
            low = mid + 1;
        } else
            high = mid - 1;
        if (key > arr[mid] && key < arr[mid + 1]) {
            high = mid;
        }
    }
    return 0;
}

int main() {
    // printf("%d\n", ex1(-4, -6));
    // char str[] = "ac";
    // printf("%d\n", ex2(str));
    // printf("%d\n", ex3(6));
    // int arr[10] = {1, 2, 7, 3, 11, 15, 90, 23, 1000, 722};
    int arr[] = {7,10,15,13};
    // int arr2[10] = {2, 1, 3, 7, 11, 15, 90, 23, 722, 1000};
    printf("%d\n", ex4(13, arr, 4));
    // printf("%d\n", ex4(8, arr2, 10));
}
