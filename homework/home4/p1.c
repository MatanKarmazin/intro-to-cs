#include <stdio.h>
void printNum(int);
void main() {
    int n, i;
    printf("FizzBuzz! please enter an 'n' integers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printNum(i);
    }
}

void printNum(int i) {
    if (i % 15 == 0) {
        printf("FizzBuzz\n");
    } else if (i % 5 == 0) {
        printf("Buzz\n");
    } else if (i % 3 == 0) {
        printf("Fizz\n");
    } else {
        printf("%d\n", i);
    }
    //return 0;
}