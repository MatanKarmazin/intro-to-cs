#include <stdio.h>

int main() {
    char result;
    printf("Is it morning?(y/n):\n");
    scanf("%c", &result);
    if (result == 'y' || result == 'Y') {
        printf("good morning\n");
    } else {
        printf("good afternoon\n");
    }
    return 0;
}
