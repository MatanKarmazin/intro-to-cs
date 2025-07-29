#include <stdio.h>

void funA(int num) {
    int temp;
    if (num < 10) {
        if (num == 0) {
            printf("9");
        } else {
            printf("%d", num - 1);
        }
        return;
    }
    temp = num % 10;
    if (temp == 0) {
        temp = 9;
    } else {
        temp -= 1;
    }
    funA(num / 10);
    printf("%d", temp);
}

void funB(int num) {
    int temp;
    if (num < 10) {
        if (num == 9) {
            printf("0");
        } else {
            printf("%d", num + 1);
        }
        return;
    }
    temp = num % 10;
    if (temp == 9) {
        temp = 0;
    } else {
        temp += 1;
    }
    funB(num / 10);
    printf("%d", temp);
}

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("funA = ");
    funA(num);
    printf("\n");
    printf("funB = ");
    funB(num);
    printf("\n");
    return 0;
}
// input = 879021
// expected result funA = 768910
// expected result funB = 980132
