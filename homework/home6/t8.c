#include <stdio.h>

void f(int num, char c1, char c2){
    if (num == 0){
        return;
    }
    printf("%c", c1);
    f(num - 1, c1, c2);
    printf("%c", c2);
    printf("%c", c2);
    // f(num - 1, c1, c2);
    
}

void main() {
    int num;
    char c1, c2;
    printf("enter a number and 2 char: ");
    scanf("%d %c %c", &num, &c1, &c2);
    f(num, c1, c2);
    printf("\n");
}