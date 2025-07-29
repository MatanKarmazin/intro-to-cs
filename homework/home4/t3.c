#include <stdio.h>
int print(int, int);
void main() {
    int num;
    printf("enter an amount: ");
    scanf("%d", &num); // num = MA SHAUSER HECHNISH
    num = print(num, 20); // == number
    num = print(num, 10);
    num = print(num, 5);
    num = print(num, 2);
    print(num, 1);
}

int print(int number, int size) {
    int count = 0;
    while (number >= size) {
        number -= size;
        count += 1;
    }
    printf("%d, %dNIS\n", count, size);

    return number;
}