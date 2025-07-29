#include <stdio.h>
void main() {
    int n, odd = 0, even = 0, digit;
    printf("enter an integer: ");
    scanf("%d", &n);
    digit = n;
    while (digit > 0) {
        digit = n % 10;
        if (digit % 2 == 0) {
            even += digit;
        } else {
            odd += digit;
        }
        n /= 10;
    }
    int sum = even - odd;
    printf("%d\n", sum);
}