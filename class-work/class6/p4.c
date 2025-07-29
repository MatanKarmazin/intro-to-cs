#include <stdio.h>

int func(int num) {
    int temp, counter = 0;
    scanf("%d", &temp);
    if (temp == -1) {
        return 0;
    }
    if (temp < num) {
        counter++;
    }
    return counter + func(num);
}

void main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("enter a sequance of numbers and to stop enter -1: ");
    int result = func(num);
    printf("%d\n", result);
    // printf("%d\n", func(num));
}