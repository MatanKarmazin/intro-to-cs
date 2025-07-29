#include <stdio.h>
int printFor(int);
int printWhile(int);

void main() {
    int n;
    printf("enter an integer: ");
    scanf("%d", &n);
    printFor(n);
    printWhile(n);
}

int printFor(int n) {
    int i, temp = 0;
    for (i = 1; i < n; i++) {
        if (i % 2 != 0 && i % 3 != 0) {
            temp += i;
        }
    }
    printf("%d\n", temp);
    return n;
}

int printWhile(int n) {
    int temp = 0, i;
    while (n > 0) {
        if (n % 2 != 0 && n % 3 != 0) {
            i = n;
            temp += i;
        }
        n--;
    }
    printf("%d\n", temp);
    return n;
}