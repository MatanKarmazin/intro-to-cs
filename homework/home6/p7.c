#include <stdio.h>

int binar(int num) {
    int temp;
    if (num <= 1) {
        printf("%d", num);
        return num;
    }
    temp = num % 2;
    binar(num / 2);
    printf("%d", temp);
}

void main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    binar(num);
    printf("\n");
}
