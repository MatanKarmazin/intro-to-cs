#include <stdio.h>
void main() {
    int n, number, temp = 0;
    printf("enter an 'n': ");
    scanf("%d", &n);
    printf("enter a sequence of 'n' numbers: ");
    do {
        scanf("%d", &number);
        // printf("n=%d, temp=%d, number=%d\n", n, temp, number);   
        if (temp < number) {
            temp = number;
        } else {
            printf("Not very ascending\n");
            return;
        }
        n--;

    } while (n > 0);
    printf("Very ascending\n");
}