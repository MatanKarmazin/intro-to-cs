#include <stdio.h>

int fun(int num) {
    if (num < 10) {
        return 1;
    }
    int firstPo, secondPo;
    firstPo = num % 10;
    secondPo = (num / 10) % 10;
    if ((firstPo % 2 == 0 && secondPo % 2 != 0) ||
        (secondPo % 2 == 0 && firstPo % 2 != 0)) {
        return fun(num / 10);
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    int result = fun(num);
    printf("%d\n", result);
    return 0;
}