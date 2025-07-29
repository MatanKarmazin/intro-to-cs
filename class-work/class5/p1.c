#include <stdio.h>

int calc(int num1, int num2, char op) {
    int nResult;
    if (op == '+') {
        nResult = num1 + num2;
    } else if (op == '-') {
        nResult = num1 - num2;
    } else if (op == '*') {
        nResult = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            nResult = num1 / num2;
        } else {
            printf("Can't divide by zero\n");
            return 0;
        }
    } else if (op == '%') {
        if (num2 != 0) {
            nResult = num1 % num2;
        } else {
            printf("Can't use %% with zero\n");
            return 0;
        }
    } else {
        printf("Invalid operator\n");
    }
    return nResult;
}

// printf("%d\n", nResult);

void main() {
    int num1, num2, result;
    char op;
    printf("enter 2 numbers and an operator: ");
    scanf("%d %d %c", &num1, &num2, &op);
    result = calc(num1, num2, op);
    if (result != 0) {
        printf("Result: %d\n", result);
    }
}