#include <stdio.h>
void main() {
    int counter = 0, number, max, min;
    printf("enter n integers and to stop enter -1\n");
    scanf("%d", &number);
    if (number == -1) {
        printf("0 numbers, no max nor min\n");
    } else {
        max = number;
        min = number;
        counter++;
        scanf("%d", &number);
        while (number != -1) {
            if (number > max) {
                max = number;
            } else if (number < min) {
                min = number;
            }
            scanf("%d", &number);
            counter++;
        }
    }
    printf("%d numbers, max = %d, min = %d\n", counter, max, min);
}