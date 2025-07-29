#include <stdio.h>

int fun(int num) {
    if (num == 0) {
        return 1;
    }
    int even, odd;
    even = num % 10;
    odd = (num / 10) % 10;
    if (even % 2 == 0 && odd % 2 != 0) {
        return fun(num / 100);
    } else if (even == 0 || odd == 0) {
        return 1;
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