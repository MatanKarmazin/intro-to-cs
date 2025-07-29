#include <stdio.h>
int azeret(int);
int sigmaI(int);

void main() {
    int n;
    printf("enter an integer: ");
    scanf("%d", &n);
    int result = azeret(n) / sigmaI(n);
    printf("%d\n", result);
}

int azeret(int number) {
    int result = 1;
    while (number > 0) {
        result *= number;
        number--;
    }
    printf("%d\n", result);
    return result;
}

int sigmaI(int number) {
    int I = 0;
    while (number > 0) {
        I += number;
        number--;
    }
    printf("%d\n", I);
    return I;
}