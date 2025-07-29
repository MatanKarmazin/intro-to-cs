#include <stdio.h>

void main() {
    int i;
    /* for (i = 1; i < 1000; i++) {
        if (i % 15 == 0) {
            printf("%d\n", i);
        }
    } */
    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d\n", i);
        }
    }
}